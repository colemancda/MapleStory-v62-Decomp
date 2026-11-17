/* FUN_005db3e5 - 0x005db3e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005db3e5(ushort *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  _memset(param_2,0,0x20);
  if (param_1 != (ushort *)0x0) {
    uVar1 = *param_1;
    while (uVar1 != 0) {
      uVar1 = *param_1;
      uVar3 = param_1[1];
      param_1 = param_1 + 1;
      iVar2 = 0;
      if (uVar3 == 0) {
LAB_005db44a:
        iVar2 = 0;
      }
      else {
        do {
          if ((uVar3 < 0x30) || (0x39 < uVar3)) break;
          iVar2 = (uVar3 - 0x30) + iVar2 * 10;
          param_1 = param_1 + 1;
          uVar3 = *param_1;
        } while (uVar3 != 0);
        if (iVar2 == 0) goto LAB_005db44a;
      }
      uVar4 = (uint)uVar1;
      if (uVar4 == 100 || uVar1 < 100) {
        if (uVar4 == 100) {
LAB_005db479:
          param_2[6] = iVar2;
        }
        else if (uVar4 != 0x4c && 0x4b < uVar1) {
          iVar5 = uVar4 - 0x50;
LAB_005db492:
          if (iVar5 == 0) {
            *param_2 = iVar2;
          }
          else if (iVar5 == 3) {
            param_2[4] = iVar2;
          }
          else {
            if (iVar5 != 5) {
              return 0;
            }
            param_2[7] = iVar2;
          }
        }
        else {
          if (uVar4 != 0x4c) {
            if (uVar4 != 0x44) {
              if (uVar4 != 0x46) {
                if (uVar4 != 0x48) {
                  if (uVar4 != 0x49) {
                    return 0;
                  }
                  goto LAB_005db46f;
                }
                goto LAB_005db4b0;
              }
              goto LAB_005db4b5;
            }
            goto LAB_005db479;
          }
LAB_005db4ab:
          param_2[3] = iVar2;
        }
      }
      else if (uVar4 == 0x66) {
LAB_005db4b5:
        param_2[2] = iVar2;
      }
      else if (uVar4 == 0x68) {
LAB_005db4b0:
        param_2[5] = iVar2;
      }
      else {
        if (uVar4 != 0x69) {
          if (uVar4 == 0x6c) goto LAB_005db4ab;
          iVar5 = uVar4 - 0x70;
          goto LAB_005db492;
        }
LAB_005db46f:
        param_2[1] = iVar2;
      }
      uVar1 = *param_1;
    }
  }
  return 1;
}


