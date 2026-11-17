/* FUN_00884333 - 0x00884333 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00884333(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_0087d9ec(2);
  iVar3 = 0;
  if (0 < DAT_00982000) {
    do {
      iVar1 = *(int *)(DAT_00980fe4 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_00980fe4) = pvVar2;
        if (*(int *)(iVar3 + DAT_00980fe4) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00980fe4) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00980fe4) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_00980fe4);
LAB_008843d7:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_00883bc3(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00980fe4 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_00980fe4 + iVar3 * 4);
          goto LAB_008843d7;
        }
        FUN_00883c15(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00982000);
  }
  FUN_0087da4d(2);
  return puVar4;
}


