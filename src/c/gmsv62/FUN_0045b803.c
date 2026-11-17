/* FUN_0045b803 - 0x0045b803 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0045b803(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0xac);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0045b92f();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  FUN_0045e6f2();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x4d4);
  uVar4 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_007d3cdd(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x507);
  uVar4 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004bc5f0(uVar4,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    uVar4 = FUN_0045b90e(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045e70f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


