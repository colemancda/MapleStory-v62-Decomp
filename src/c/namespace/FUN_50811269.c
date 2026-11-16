/* FUN_50811269 - 0x50811269 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_50811269(void)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *this;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  bVar2 = FUN_5080dbda((void *)(extraout_ECX + 0x5c),(wchar_t *)&DAT_5081d240);
  if (!bVar2) {
    puVar1 = (undefined4 *)(extraout_ECX + 4);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    FUN_508012a1();
    piVar5 = *(int **)(extraout_ECX + 0x60);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(void **)(unaff_EBP + -0x10) = (void *)(extraout_ECX + 0x60);
    if ((piVar5 == (int *)0x0) || (iVar4 = *piVar5, iVar4 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar4 + -4) >> 1;
    }
    if ((uVar3 == 0) &&
       (iVar4 = FUN_50806999((int *)(extraout_ECX + 0x5c),(void *)(extraout_ECX + 0x60)), iVar4 == 0
       )) {
      this = *(undefined4 **)(unaff_EBP + 8);
      *this = 0;
      piVar5 = (int *)(extraout_ECX + 8);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *puVar1 = 0;
      }
      goto LAB_5081134d;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar5 = (int *)(extraout_ECX + 8);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *puVar1 = 0;
    }
    puVar1 = *(undefined4 **)(extraout_ECX + 0x30);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    FUN_508012a1();
    iVar4 = *(int *)(extraout_ECX + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar5 = (int *)FUN_50811fc4((void *)(iVar4 + 8),*(int **)(unaff_EBP + -0x10),(undefined4 *)0x0)
    ;
    if (piVar5 != (int *)0x0) {
      this = *(undefined4 **)(unaff_EBP + 8);
      *this = 0;
      if (((*piVar5 != 0) && (iVar4 = FUN_50812cd0(this,piVar5), iVar4 < 0)) &&
         (iVar4 != -0x7fffbffe)) {
        FUN_5080dfed(iVar4);
      }
      piVar5 = puVar1 + 1;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *puVar1 = 0;
      }
      goto LAB_5081134d;
    }
    piVar5 = puVar1 + 1;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *puVar1 = 0;
    }
  }
  this = *(undefined4 **)(unaff_EBP + 8);
  *this = 0;
LAB_5081134d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


