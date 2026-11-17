/* ptr_006279ca - 0x006279ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006279ca(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_c;
  
  piVar1 = (int *)FUN_004029b9();
  *(int **)(unaff_EBP + 8) = piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (piVar1 == unaff_EBX) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007e62e9();
  }
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar3 != 0) & uVar3 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004c26c4();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_c;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_00679d22(&uStack_c,0xd27);
  uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  piVar1 = unaff_EBX;
  FUN_004c2677();
  FUN_007eddac(piVar1,uVar4);
  uStack_c = 0x627a52;
  FUN_007edf11();
  FUN_007e6e3c();
  FUN_004bc6a2();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


