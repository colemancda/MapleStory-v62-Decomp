/* FUN_0063abaf - 0x0063abaf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0063abaf(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc8b4();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x22] = 0xffffffff;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = uVar1;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x30] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x31,8,3,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x3a] = 0;
  extraout_ECX[0x3b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x3c,4,6,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x42] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087b2f0(extraout_ECX + 0x43,4,4,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x47] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *extraout_ECX = &PTR_FUN_008ed2b0;
  extraout_ECX[1] = &PTR_LAB_008ed264;
  extraout_ECX[2] = &PTR_FUN_008ed260;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0xdfd);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


