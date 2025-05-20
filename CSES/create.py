import os
from bs4 import BeautifulSoup
import re
import time

def parse_html_to_dict(html_file):
    try:
        # Read and parse the HTML file
        with open(html_file, 'r', encoding='utf-8') as file:
            soup = BeautifulSoup(file, 'html.parser')
        
        # Use dict to maintain the order of h2 elements (Python 3.7+)
        structure = {}
        
        # Find all <h2> elements
        h2_elements = soup.find_all('h2')
        
        for h2 in h2_elements:
            # Get the folder name from the <h2> text without stripping numbers
            folder_name = h2.get_text(strip=True)
            
            # Find the <ul> after this <h2>
            ul = h2.find_next_sibling('ul')
            if ul:
                # Create a list to store <a> contents
                a_contents = []
                
                # Iterate through each <a> in this <ul>
                for a in ul.find_all('a'):
                    # Get the <a> text without stripping numbers
                    a_text = a.get_text(strip=True)
                    a_contents.append(a_text)
                
                # Add to our dictionary
                structure[folder_name] = a_contents
            else:
                # If there's no <ul>, add an empty list
                structure[folder_name] = []
        
        return structure
    
    except FileNotFoundError:
        print(f"Error: The file '{html_file}' does not exist.")
    except PermissionError:
        print(f"Error: Permission denied when accessing '{html_file}'.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")
    
    return None

def create_folders_and_files(structure, base_path='.'):
    """
    Create folders and files based on the provided dictionary.

    Args:
        structure (dict): The dictionary where keys are folder names and values are lists of file names.
        base_path (str): The base path where folders and files will be created.
    """
    try:
        # Initialize a counter for folders
        folder_counter = 1
        
        # Loop through each folder (key) and its associated file list (value)
        for folder_name, files in structure.items():
            # Define the path for the new folder with a prefix for order
            folder_path = os.path.join(base_path, f"{folder_counter:d}.{folder_name}")
            
            # Create the folder if it doesn't exist
            if not os.path.exists(folder_path):
                os.mkdir(folder_path)
                print(f"Folder created: {folder_path}")
            
            # Initialize a counter for files
            file_counter = 1
            
            # Loop through each file name in the list
            for file_name in files:
                # Define the path for the new file with a prefix for order
                file_path = os.path.join(folder_path, f"{file_counter:d}.{file_name}.cpp")
                
                # Create the file (empty file)
                with open(file_path, 'w') as file:
                    pass  # Just create the file, don't write anything
                
                print(f"File created: {file_path}")
                
                # Increment file counter
                file_counter += 1
                
                # Add a delay of 0 seconds
                time.sleep(0)

            # Increment folder counter
            folder_counter += 1

    except Exception as e:
        print(f"An unexpected error occurred: {e}")


if __name__ == '__main__':
    html_file = 'problem.html'
    structure = parse_html_to_dict(html_file)
    del structure['General']
    
    if structure:
        base_path = '.'  # You can specify a different base path if needed
        create_folders_and_files(structure, base_path)
