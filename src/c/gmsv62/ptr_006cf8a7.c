/* ptr_006cf8a7 - 0x006cf8a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006cf8a7(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 & 0x80000000) != 0) {
    return;
  }
  if (param_2 == 0xd) {
    if (*(int *)(param_1 + 0x100) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x104);
  }
  else {
    if (param_2 != 0x1b) {
      if (param_2 == 0x26) {
        *(undefined4 *)(param_1 + 0x100) = 1;
        do {
          if (*(int *)(param_1 + 0x104) == 0) {
            *(undefined4 *)(param_1 + 0x104) = 6;
          }
          else {
            *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + -1;
          }
          iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcc + *(int *)(param_1 + 0x104) * 8) + 4
                                       ) + 0x20))();
        } while (iVar2 == 0);
LAB_006cf996:
        FUN_006cfa81();
        return;
      }
      if (param_2 == 0x28) {
        *(undefined4 *)(param_1 + 0x100) = 1;
        do {
          if (*(int *)(param_1 + 0x104) < 6) {
            *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x104) = 0;
          }
          iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcc + *(int *)(param_1 + 0x104) * 8) + 4
                                       ) + 0x20))();
        } while (iVar2 == 0);
        goto LAB_006cf996;
      }
      uVar1 = param_3 >> 0x10 & 0xff;
      if (uVar1 == 0x36) {
        uVar1 = 0x2a;
      }
      iVar2 = DAT_00979110 + uVar1 * 4;
      if (*(char *)(uVar1 + 4 + iVar2) != '\x04') {
        return;
      }
      if (*(int *)(uVar1 + iVar2 + 5) != 0xe) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  }
  (**(code **)(*(int *)(param_1 + -4) + 0x34))(1);
  return;
}


