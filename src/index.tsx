import { NativeModules } from 'react-native';

type FilePickerType = {
  pickFile(path: Promise<string>): Promise<number>;
};

const { FilePicker } = NativeModules;

export default FilePicker as FilePickerType;
