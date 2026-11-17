/* FUN_0064f1b2 - 0x0064f1b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064f1b2(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = 1;
  if (uVar1 < 0x56) {
    if (uVar1 == 0x55) {
LAB_0064f257:
      *param_2 = 7;
      return uVar2;
    }
    if (uVar1 < 0x4a) {
      if (uVar1 == 0x49) {
LAB_0064f216:
        *param_2 = 1;
        return uVar2;
      }
      if (uVar1 == 0) {
LAB_0064f26d:
        *param_2 = 0;
        return uVar2;
      }
      if (uVar1 == 0x44) goto LAB_0064f22f;
      if (uVar1 == 0x46) goto LAB_0064f228;
      if (uVar1 == 0x48) goto LAB_0064f21d;
    }
    else {
      if (uVar1 == 0x4c) goto LAB_0064f23a;
      if (uVar1 == 0x50) goto LAB_0064f26d;
      if (uVar1 == 0x53) goto LAB_0064f262;
    }
  }
  else if (uVar1 < 0x6d) {
    if (uVar1 == 0x6c) {
LAB_0064f23a:
      *param_2 = 3;
      return uVar2;
    }
    if (uVar1 == 100) {
LAB_0064f22f:
      *param_2 = 6;
      return uVar2;
    }
    if (uVar1 == 0x66) {
LAB_0064f228:
      *param_2 = 2;
      return uVar2;
    }
    if (uVar1 == 0x68) {
LAB_0064f21d:
      *param_2 = 5;
      return uVar2;
    }
    if (uVar1 == 0x69) goto LAB_0064f216;
  }
  else {
    if (uVar1 == 0x70) goto LAB_0064f26d;
    if (uVar1 == 0x73) {
LAB_0064f262:
      *param_2 = 4;
      return uVar2;
    }
    if (uVar1 == 0x75) goto LAB_0064f257;
  }
  return 0;
}


