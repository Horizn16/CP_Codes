from bs4 import BeautifulSoup
import os

def parse_html_and_create_files(html_file):
    try:
        # Read and parse the HTML file
        with open(html_file, 'r', encoding='utf-8') as file:
            soup = BeautifulSoup(file, 'html.parser')
        
        # Find all <h2> elements
        h2_elements = soup.find_all('h2')
        
        for h2 in h2_elements:
            # Get the folder name from the <h2> text
            folder_name = h2.get_text(strip=True).replace('/', '_').replace('\\', '_')
            
            # Create a directory for the folder if it doesn't already exist
            os.makedirs(folder_name, exist_ok=True)
            
            # Find the <ul> after this <h2>
            ul = h2.find_next_sibling('ul')
            if ul:
                # Iterate through each <li> in this <ul>
                for li in ul.find_all('li'):
                    cpp_file_name = li.get_text(strip=True).replace('/', '_').replace('\\', '_') + '.cpp'
                    cpp_file_path = os.path.join(folder_name, cpp_file_name)
                    
                    # Create an empty .cpp file in the folder
                    with open(cpp_file_path, 'w') as cpp_file:
                        pass  # Simply create an empty file
    
    except FileNotFoundError:
        print(f"Error: The file '{html_file}' does not exist.")
    except PermissionError:
        print(f"Error: Permission denied when accessing '{html_file}' or creating directories/files.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

# Example usage
if __name__ == '__main__':
    html_file = 'problem.html'  # Replace with your actual HTML file path
    parse_html_and_create_files(html_file)