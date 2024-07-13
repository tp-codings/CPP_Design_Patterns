import argparse
import os

def create_header_file(class_name, path):
    code = f"""#ifndef {class_name.upper()}_H
#define {class_name.upper()}_H

class {class_name}
{{
    public:
        {class_name}(){{}}
        ~{class_name}(){{}}

    private:

}};

#endif
"""

    file_path = os.path.join(path, f"{class_name}.h")
    with open(file_path, "w") as file:
        file.write(code)
    print(f"Header file created at: {file_path}")

def main():
    parser = argparse.ArgumentParser(description="Generate a C++ header file for a given class.")
    parser.add_argument("path", type=str, help="Path to the directory where the header file will be saved")
    parser.add_argument("class_name", type=str, help="Name of the class for the header file")

    args = parser.parse_args()

    create_header_file(args.class_name, args.path)

if __name__ == "__main__":
    main()