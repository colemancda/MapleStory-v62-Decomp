/* FUN_0059b7c0 - 0x0059b7c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0059b7c0(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00979448 = -(uint)(extraout_ECX + 3 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 1;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 1;
  extraout_ECX[10] = 1;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *extraout_ECX = &LAB_008ec6bc;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  _memset((void *)(unaff_EBP + -0x114),0,0x104);
  SHGetSpecialFolderPathA((HWND)0x0,(LPSTR)(unaff_EBP + -0x114),0x1a,1);
  FUN_00879f55(unaff_EBP + -0x218,s__s__s_00965988,unaff_EBP + -0x114,
               s_Nexon_MapleStory_MapleTV_00965990);
  FUN_00434e21(extraout_ECX + 5,&DAT_00964da0,unaff_EBP + -0x218);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


