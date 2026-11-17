/* FUN_006a6708 - 0x006a6708 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006a6708(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x20,4,2,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  iVar1 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[0x26] = iVar1;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2c] = 0;
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x2d] = 0;
  *extraout_ECX = &PTR_FUN_008ef53c;
  extraout_ECX[1] = &PTR_LAB_008ef4f0;
  extraout_ECX[2] = &PTR_FUN_008ef4ec;
  FUN_006a7616(uVar2);
  if (iVar1 == 0) {
    uVar2 = 0xf25;
    if (*(int *)(unaff_EBP + 0xc) == 1) {
      uVar2 = 0xf26;
    }
  }
  else {
    uVar2 = 0xf27;
    if (*(int *)(unaff_EBP + 0xc) == 1) {
      uVar2 = 0xf28;
    }
  }
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,uVar2);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004bc5f0(uVar2,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


