/* FUN_006aa271 - 0x006aa271 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006aa271(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x23] = 0;
  FUN_0074b9b2();
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x167] = 0;
  extraout_ECX[0x168] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087b2f0(extraout_ECX + 0x169,4,3,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *extraout_ECX = &PTR_FUN_008ef658;
  extraout_ECX[1] = &PTR_LAB_008ef60c;
  extraout_ECX[2] = &PTR_FUN_008ef608;
  FUN_004bc5f0(u_UI_UIWindow_img_EnchantSkill_bac_0096a6cc,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


