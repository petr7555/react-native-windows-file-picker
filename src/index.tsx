import { NativeModules } from 'react-native';

type WindowsFilePickerType = {
  multiply(a: number, b: number): Promise<number>;
};

const { WindowsFilePicker } = NativeModules;

export default WindowsFilePicker as WindowsFilePickerType;
