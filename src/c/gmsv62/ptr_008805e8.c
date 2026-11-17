/* ptr_008805e8 - 0x008805e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_008805e8(int param_1,int param_2)

{
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  FUN_0087a3a0(DAT_00982238,DAT_00982238 + 0x14,(param_1 - DAT_00982238) + -0x14 + param_2);
  DAT_0098223c = DAT_0098223c + -1;
  if (DAT_00982238 < *(uint *)(unaff_EBP + 8)) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -0x14;
  }
  DAT_00982230 = DAT_00982240;
  DAT_0098222c = unaff_EDI;
  DAT_00982238 = *(undefined4 *)(unaff_EBP + 8);
  return;
}


