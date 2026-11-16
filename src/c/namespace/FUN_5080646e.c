/* FUN_5080646e - 0x5080646e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080646e(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5080e090();
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iVar2 = *(int *)(unaff_EBP + 8);
    puVar3 = *(undefined4 **)(iVar2 + 0x18);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_EBP + 8) = puVar3;
      FUN_508012a1();
      puVar4 = *(undefined4 **)(*(int *)(iVar2 + 0x18) + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar4 != (undefined4 *)0x0) {
        uVar5 = (**(code **)*puVar4)
                          (puVar4,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10)
                          );
        piVar1 = puVar3 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *puVar3 = 0;
        }
        goto LAB_508064c5;
      }
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar3 = 0;
      }
    }
  }
  uVar5 = 0x80004003;
LAB_508064c5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


