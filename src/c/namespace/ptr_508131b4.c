/* ptr_508131b4 - 0x508131b4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 ptr_508131b4(void)

{
  int *piVar1;
  int iVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    uVar4 = 0x80004003;
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    iVar5 = *(int *)(iVar2 + 0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 == 0) {
      FUN_50813070();
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_50813e7b((void *)(unaff_EBP + 8));
    puVar7 = *(undefined4 **)(iVar2 + 0x14);
    *(int *)(unaff_EBP + -0x14) = iVar5;
    *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar7;
    FUN_508012a1();
    this = *(void **)(iVar2 + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar6 = FUN_50813027(this,*(wchar_t **)(unaff_EBP + 0xc));
    if (uVar6 == 0) {
      iVar5 = FUN_50813d2b(*(void **)(*(int *)(iVar2 + 0x1c) + 0x14));
      FUN_50813c79(iVar5);
      FUN_50813c46(*(int *)(iVar5 + 4) + 0x10);
      FUN_508050d0();
      puVar7 = (undefined4 *)(*(int *)(iVar5 + 4) + 0xc);
      FUN_50803e96((int *)(unaff_EBP + 0xc));
      FUN_508052b4(puVar7);
      *puVar7 = *(undefined4 *)(unaff_EBP + 0xc);
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0xc));
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0x18) = *(undefined4 *)(iVar2 + 0x1c);
      FUN_50813bd9((void *)(iVar3 + 0x10),iVar2 + 0x10);
      FUN_50813bd9((void *)(iVar3 + 0x18),iVar5);
      puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
      piVar1 = puVar7 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar7 = 0;
      }
      **(undefined4 **)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 8);
      uVar4 = 0;
    }
    else {
      piVar1 = puVar7 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar7 = 0;
      }
      FUN_50813c08((int *)(unaff_EBP + 8));
      uVar4 = 0x80030050;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


