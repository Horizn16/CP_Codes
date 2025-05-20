from bs4 import BeautifulSoup
import re

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

if __name__ == '__main__':
    html_file = 'problem.html'  
    result = parse_html_to_dict(html_file)
    '''
    if result:
        for folder, files in result.items():
            print(f"Folder: {folder}")
            for file in files:
                print(f"  - {file}")
            print()'''
    print(result)
