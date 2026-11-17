/* ptr_00471973 - 0x00471973 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00471973(void)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined *puVar5;
  int iVar6;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  while( true ) {
    FUN_00414edd(&DAT_00978474);
    while( true ) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(unaff_EBP + -0x18) + -4);
      }
      if (iVar6 <= unaff_EDI) break;
      _strlen((char *)&DAT_009645b0);
      FUN_0045efbb(&DAT_009645b0);
      unaff_EDI = unaff_EDI + 1;
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_EDI = 0;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb();
    }
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= unaff_EBX) break;
    FUN_0087a1b0();
    uVar3 = FUN_00412335(unaff_EBX);
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffffc;
    FUN_004033a1(uVar3);
    iVar6 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040263d(iVar6);
    psVar4 = (short *)FUN_004048a4(iVar6);
    sVar1 = *psVar4;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (sVar1 == 8) {
      puVar5 = *(undefined **)(psVar4 + 4);
    }
    else {
      puVar5 = &DAT_0097812c;
    }
    FUN_00454081(puVar5);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_0045ed72(0);
    FUN_0045ee27();
    FUN_00414f8b();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iVar6 = FUN_00471582(*(undefined4 *)(unaff_EBP + 8));
  if (iVar6 == 0) {
    iVar6 = FUN_004715e9(*(undefined4 *)(unaff_EBP + 8));
    if (iVar6 == 0) {
      uVar3 = 0;
      goto LAB_00471a12;
    }
    if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0xc) = 1;
    }
  }
  uVar3 = 1;
LAB_00471a12:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


