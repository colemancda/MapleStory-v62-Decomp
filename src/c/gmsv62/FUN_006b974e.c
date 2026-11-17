/* FUN_006b974e - 0x006b974e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006b974e(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(0xb,3,0x2ca,6,1,0,0);
  DAT_0097bd20 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x162] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x166] = 0;
  extraout_ECX[0x167] = 0;
  extraout_ECX[0x16a] = 0;
  extraout_ECX[0x16c] = 0;
  extraout_ECX[0x16e] = 0;
  extraout_ECX[0x170] = 0;
  extraout_ECX[0x172] = 0;
  extraout_ECX[0x174] = 0;
  extraout_ECX[0x176] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087b2f0(extraout_ECX + 0x177,8,4,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x180] = 0;
  extraout_ECX[0x182] = 0;
  extraout_ECX[0x184] = 0;
  extraout_ECX[0x186] = 0;
  extraout_ECX[0x188] = 0;
  extraout_ECX[0x18a] = 0;
  extraout_ECX[0x18c] = 0;
  extraout_ECX[0x18e] = 0;
  extraout_ECX[400] = 0;
  extraout_ECX[0x191] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0087b2f0(extraout_ECX + 0x192,4,3,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0087b2f0(extraout_ECX + 0x195,4,7,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x19c] = 0;
  extraout_ECX[0x19d] = 0;
  uVar1 = extraout_ECX[0x155];
  *extraout_ECX = &PTR_FUN_008ef9b8;
  extraout_ECX[1] = &PTR_LAB_008ef96c;
  extraout_ECX[2] = &PTR_FUN_008ef968;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_0047c974(uVar1,unaff_EBP + -0x14,unaff_EBP + -0x10,extraout_ECX + 0x15c);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0x2de,0x20e,10,
               1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


