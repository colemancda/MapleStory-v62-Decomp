/* FUN_50801deb - 0x50801deb in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50801deb(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  short *psVar9;
  int unaff_EBP;
  
  psVar9 = *(short **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  if ((psVar9 == (short *)0x0) || (sVar2 = *psVar9, sVar2 == 0)) {
LAB_50801fbe:
    uVar3 = 0x80070057;
  }
  else if (*(int *)(unaff_EBP + 0x10) == 0) {
    uVar3 = 0x80004003;
  }
  else {
    do {
      if ((sVar2 == 0x2f) || (sVar2 == 0x5c)) goto LAB_50801fbe;
      sVar2 = psVar9[1];
      psVar9 = psVar9 + 1;
    } while (sVar2 != 0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_508042fe((void *)(unaff_EBP + -0x14));
    iVar1 = *(int *)(unaff_EBP + 8);
    puVar5 = (undefined4 *)FUN_508063c0((void *)(iVar1 + -0x3c),(undefined4 *)(unaff_EBP + 8));
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 100),(IBinding *)*puVar5)
    ;
    FUN_50808606((int *)(unaff_EBP + 8));
    FUN_50803d00();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_50801ba4();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piVar6 = FUN_5080504c();
    FUN_50803c5f((void *)(unaff_EBP + 8),piVar6);
    FUN_50803d5b((void *)(iVar4 + 0x34),(int *)(unaff_EBP + 8));
    FUN_508052b4((undefined4 *)(unaff_EBP + 8));
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x1c));
    puVar5 = (undefined4 *)(iVar1 + -0x18);
    *(undefined4 **)(unaff_EBP + 8) = puVar5;
    FUN_508012a1();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar7 = FUN_50803ea7((void *)(iVar1 + 0x10),(int *)(unaff_EBP + 0xc),(short *)0x0);
    if (iVar7 == 0) {
      FUN_508042dc((void *)(unaff_EBP + -0x30),(int *)(iVar4 + DAT_50817214),'\x01');
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puVar8 = FUN_50803fbb();
      FUN_508043a3(puVar8 + 4,(short *)(unaff_EBP + -0x30));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar4 = FUN_508037a7((short *)(unaff_EBP + -0x30));
      if (iVar4 < 0) {
        FUN_5080dfed(iVar4);
      }
      piVar6 = (int *)(iVar1 + -0x14);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        *puVar5 = 0;
      }
      **(undefined4 **)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      uVar3 = 0;
    }
    else {
      piVar6 = (int *)(iVar1 + -0x14);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        *puVar5 = 0;
      }
      FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
      FUN_50808606((int *)(unaff_EBP + -0x14));
      uVar3 = 0x80030050;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


