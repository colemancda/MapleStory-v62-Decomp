/* FUN_00883e05 - 0x00883e05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00883e05(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_0087d9ec(2);
  iVar3 = 0;
  if (0 < DAT_00982000) {
    do {
      iVar1 = *(int *)(DAT_00980fe4 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_00883bc3(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00980fe4 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_00883d72(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_00883d72(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_00883c15(iVar3,*(undefined4 *)(DAT_00980fe4 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00982000);
  }
  FUN_0087da4d(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}


