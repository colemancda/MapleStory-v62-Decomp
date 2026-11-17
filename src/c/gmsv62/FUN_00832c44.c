/* FUN_00832c44 - 0x00832c44 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00832c44(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8e3);
  uVar4 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007d3cdd(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x110);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006cf158();
  }
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar3 != 0) & uVar3 - 8;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0083e076();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_004bc6a2();
  if (iVar2 == 1) {
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x10c);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else if (iVar2 == 1) {
      uVar4 = 1;
    }
    else if (iVar2 == 2) {
      uVar4 = 2;
    }
    else if (iVar2 == 3) {
      uVar4 = 3;
    }
    else if (iVar2 == 4) {
      uVar4 = 7;
    }
    else {
      if (iVar2 != 5) {
        if (iVar2 == 6) {
          FUN_006d1f73(0);
        }
        goto LAB_00832d2d;
      }
      uVar4 = 6;
    }
    FUN_00831b94(uVar4,0xffffffff);
  }
LAB_00832d2d:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0083e093();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


