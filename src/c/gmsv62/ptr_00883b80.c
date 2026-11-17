/* ptr_00883b80 - 0x00883b80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_00883b80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = func_0x00883dfc();
  if (DAT_009806e0 == '\0') {
    return iVar1;
  }
  iVar3 = 0;
  FUN_0087d9ec(2);
  iVar1 = 3;
  if (3 < DAT_00982000) {
    do {
      iVar4 = iVar1 * 4;
      iVar2 = *(int *)(iVar4 + DAT_00980fe4);
      if (iVar2 != 0) {
        if (((*(byte *)(iVar2 + 0xc) & 0x83) != 0) && (iVar2 = FUN_0087bdf9(iVar2), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar1) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar4 + DAT_00980fe4) + 0x20));
          FUN_0087aa78(*(undefined4 *)(iVar4 + DAT_00980fe4));
          *(undefined4 *)(iVar4 + DAT_00980fe4) = 0;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00982000);
  }
  FUN_0087da4d(2);
  return iVar3;
}


