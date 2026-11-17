/* FUN_006b38b8 - 0x006b38b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006b38b8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = uVar3 + 1;
    if ((((uVar1 == 0xe) || ((0x14 < (int)uVar1 && ((int)uVar1 < 0x31)))) &&
        ((int)(&DAT_0096a868)[uVar3 * 2] < param_2)) &&
       (((param_2 < (&DAT_0096a868)[uVar3 * 2] + 0x20 && ((int)(&DAT_0096a86c)[uVar3 * 2] < param_3)
         ) && (param_3 < (&DAT_0096a86c)[uVar3 * 2] + 0x20)))) {
      if (uVar1 == 0xe) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0xe;
        }
        if (iVar2 == 1) {
          return 0x1e;
        }
        if (iVar2 == 2) {
          return 0x26;
        }
      }
      else if (uVar1 == 0x15) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x15;
        }
        if (iVar2 == 1) {
          return 0x1f;
        }
        if (iVar2 == 2) {
          return 0x27;
        }
      }
      else if (uVar1 == 0x1d) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x1d;
        }
        if (iVar2 == 1) {
          return 0x20;
        }
        if (iVar2 == 2) {
          return 0x28;
        }
      }
      else if (uVar1 == 0x16) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x16;
        }
        if (iVar2 == 1) {
          return 0x21;
        }
        if (iVar2 == 2) {
          return 0x29;
        }
      }
      else if (uVar1 == 0x17) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x17;
        }
        if (iVar2 == 1) {
          return 0x22;
        }
        if (iVar2 == 2) {
          return 0x2a;
        }
      }
      else if (uVar1 == 0x1a) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x1a;
        }
        if (iVar2 == 1) {
          return 0x23;
        }
        if (iVar2 == 2) {
          return 0x2b;
        }
      }
      else if (uVar1 == 0x1b) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x1b;
        }
        if (iVar2 == 1) {
          return 0x24;
        }
        if (iVar2 == 2) {
          return 0x2c;
        }
      }
      else if (uVar1 == 0x1c) {
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x1c;
        }
        if (iVar2 == 1) {
          return 0x25;
        }
        if (iVar2 == 2) {
          return 0x2d;
        }
      }
      else {
        if (uVar1 != 0x2e) {
          return uVar3 + 1;
        }
        iVar2 = *(int *)(param_1 + 0x56c);
        if (iVar2 == 0) {
          return 0x2e;
        }
        if (iVar2 == 1) {
          return 0x2f;
        }
        if (iVar2 == 2) {
          return 0x30;
        }
      }
    }
    uVar3 = uVar1;
    if (0x30 < uVar1) {
      if (((param_2 < 0x2f) || (0x4d < param_2)) || ((param_3 < 0xc || (0x2a < param_3)))) {
        if (((param_2 < 0x71) || (0x8f < param_2)) || ((param_3 < 0xc || (0x2a < param_3)))) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0xc9;
        }
      }
      else {
        iVar2 = 200;
      }
      return iVar2;
    }
  } while( true );
}


