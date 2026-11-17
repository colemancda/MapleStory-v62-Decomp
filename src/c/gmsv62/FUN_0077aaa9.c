/* FUN_0077aaa9 - 0x0077aaa9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0077aaa9(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(7,3,0x124,8,0,0,0);
  DAT_0097bef4 = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x163,8,6,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x16f,8,9,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x181,8,0xc,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x199,8,6,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087b2f0(extraout_ECX + 0x1a5,8,0xc,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087b2f0(extraout_ECX + 0x1bd,8,0xf,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0087b2f0(extraout_ECX + 0x1db,8,2,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x203] = 0;
  extraout_ECX[0x205] = 0;
  extraout_ECX[0x206] = 0;
  extraout_ECX[0x20d] = 0;
  extraout_ECX[0x20e] = 0;
  extraout_ECX[0x20f] = 0;
  piVar1 = extraout_ECX + 0x15c;
  uVar2 = extraout_ECX[0x155];
  *extraout_ECX = &PTR_FUN_008f1500;
  extraout_ECX[1] = &PTR_FUN_008f14b4;
  extraout_ECX[2] = &PTR_FUN_008f14b0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0047c974(uVar2,unaff_EBP + -0x14,unaff_EBP + -0x10,piVar1);
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 == -1) {
    iVar3 = *piVar1;
  }
  else {
    *piVar1 = iVar3;
  }
  extraout_ECX[0x162] = iVar3;
  if ((iVar3 < 0) || (4 < iVar3)) {
    *piVar1 = 0;
    extraout_ECX[0x162] = 0;
  }
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0x138,0x185,10,
               1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


