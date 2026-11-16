/* FUN_50813634 - 0x50813634 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50813634(void)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int unaff_EBP;
  
  FUN_5080e090();
  pwVar1 = *(wchar_t **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  if ((pwVar1 == (wchar_t *)0x0) || (*pwVar1 == L'\0')) {
    uVar5 = 0x80070057;
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    puVar3 = *(undefined4 **)(iVar2 + 0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_EBP + 0xc) = puVar3;
      FUN_508012a1();
      this = *(void **)(iVar2 + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar4 = FUN_50813027(this,pwVar1);
      if (uVar4 != 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar4 + 4);
        FUN_50813cac(unaff_EBP + -0x1c);
        piVar7 = *(int **)(unaff_EBP + -0x18);
        piVar6 = (int *)piVar7[6];
        *(undefined1 *)(unaff_EBP + -4) = 2;
        for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[6]) {
          *piVar6 = *piVar6 - *piVar7;
          piVar6[7] = piVar6[7] - *(int *)(*(int *)(unaff_EBP + -0x18) + 0x1c);
          piVar7 = *(int **)(unaff_EBP + -0x18);
        }
        piVar7[6] = 0;
        FUN_50813d69(*(void **)(*(int *)(iVar2 + 0x1c) + 0x14),uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_508032a9(unaff_EBP + -0x1c);
        }
        puVar3 = *(undefined4 **)(unaff_EBP + 0xc);
        piVar7 = puVar3 + 1;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          *puVar3 = 0;
        }
        uVar5 = 0;
        goto LAB_50813718;
      }
      piVar7 = puVar3 + 1;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        *puVar3 = 0;
      }
    }
    uVar5 = 0x80030002;
  }
LAB_50813718:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


