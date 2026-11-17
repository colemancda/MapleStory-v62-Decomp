/* FUN_005a7189 - 0x005a7189 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a7189(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005a728b();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 800;
  *(undefined4 *)(unaff_EBP + -0x1c) = 600;
  *(undefined4 *)(unaff_EBP + -0x50) = 200;
  *(undefined4 *)(unaff_EBP + -0x4c) = 1;
  *(undefined4 *)(unaff_EBP + -0x48) = 1000;
  *(undefined4 *)(unaff_EBP + -0x44) = 5;
  *(undefined4 *)(unaff_EBP + -0x40) = 500;
  *(undefined4 *)(unaff_EBP + -0x3c) = 3;
  *(undefined4 *)(unaff_EBP + -0x38) = 300;
  *(undefined4 *)(unaff_EBP + -0x34) = 2;
  *(undefined4 *)(unaff_EBP + -0x30) = 200;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  puVar3 = (undefined4 *)(unaff_EBP + -0x50);
  do {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0xbb6);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0041354c(unaff_EBP + -0x14,uVar1,*(undefined4 *)(unaff_EBP + 8),
                 *(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    FUN_004286a5(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x28,*puVar3,puVar3[1],200,30000);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar3 = puVar3 + 2;
  } while (*(uint *)(unaff_EBP + -0x10) < 5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


