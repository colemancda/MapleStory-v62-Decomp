/* FUN_008330ac - 0x008330ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_008330ac(int param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((DAT_00978358 == 0) || (*(int *)(DAT_00978358 + 0x2454) == 0)) {
    if (((param_1 == 0xd) && ((param_2 & 0x80000000) == 0)) ||
       ((param_1 == 0xbf && ((param_2 & 0x80000000) == 0)))) {
      if (DAT_00978360 == 0) {
        return true;
      }
      FUN_0073e65e(0);
      return true;
    }
    uVar4 = param_2 >> 0x10 & 0xff;
    if ((param_2 & 0x80000000) == 0) {
      if (param_1 == 9) {
        uVar2 = FUN_008331e1();
        iVar3 = FUN_00833206(uVar2);
        if (iVar3 != 0) {
          return true;
        }
      }
      else if (param_1 == 0x1b) {
        uVar2 = FUN_008331e1();
        iVar3 = FUN_00832d9e(uVar2);
        if (iVar3 == 0) {
          if (DAT_0097846c == 0) {
            if (DAT_00979174 == 0) {
              if ((DAT_00978358 != 0) && (*(int *)(DAT_00978358 + 0x2454) != 0)) {
                FUN_007b0b2a();
              }
              FUN_00832700();
            }
            else {
              FUN_0083cb3e();
            }
          }
          else {
            FUN_0083af5d();
          }
        }
        return true;
      }
    }
    if (uVar4 == 0x36) {
      uVar4 = 0x2a;
    }
    pcVar1 = (char *)(uVar4 * 5 + 4 + DAT_00979110);
    iVar3 = *(int *)(pcVar1 + 1);
    if (((-1 < iVar3) && (iVar3 < 0x19)) && (*pcVar1 == '\x04')) {
      iVar3 = FUN_00833356(param_2);
      return iVar3 != 0;
    }
  }
  return false;
}


