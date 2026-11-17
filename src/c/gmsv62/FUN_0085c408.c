/* FUN_0085c408 - 0x0085c408 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0085c408(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x2b40) == 0) {
    uVar3 = FUN_00679d22(unaff_EBP + -0x1c,0x14f);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    FUN_00679d22(unaff_EBP + -0x14,0x15a);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = extraout_ECX + 0x2b5c;
    *(undefined4 *)(unaff_EBP + -0x18) = 6;
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00414edd(iVar4,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piVar2 = (int *)FUN_004f1f89(unaff_EBP + -0x1c,&DAT_00964364,unaff_EBP + -0x10);
      iVar1 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + -4);
      }
      FUN_0045efbb(iVar1,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      iVar4 = iVar4 + 0xd;
      piVar2 = (int *)(unaff_EBP + -0x18);
      *piVar2 = *piVar2 + -1;
    } while (*piVar2 != 0);
    FUN_00471102(unaff_EBP + -0x14,0xc);
    if (*(int *)(extraout_ECX + 0x2bf2) == *(int *)(extraout_ECX + 0x2088)) {
      uVar3 = FUN_00679d22(unaff_EBP + -0x1c,0x15b);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00471102(uVar3,0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


