import { NativeModules } from 'react-native';

type NativeModuleSampleType = {
  add(a: number, b: number): number;
};

const { NativeModuleSample } = NativeModules;

export default NativeModuleSample as NativeModuleSampleType;
