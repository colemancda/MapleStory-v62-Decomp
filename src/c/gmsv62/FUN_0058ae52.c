/* FUN_0058ae52 - 0x0058ae52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0058ae52(void)

{
  int unaff_EBP;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 0;
  iStack_20 = unaff_EBP + -0x1c;
  uStack_24 = 0x58ae75;
  FUN_00817e25();
  uStack_1c = 0x58ae82;
  FUN_0074d6fb();
  if ((((0x251 < *(int *)(unaff_EBP + -0x1c)) && (*(int *)(unaff_EBP + -0x1c) < 0x2ad)) &&
      (0x108 < *(int *)(unaff_EBP + -0x18))) && (*(int *)(unaff_EBP + -0x18) < 0x129)) {
    uStack_1c = 0;
    iStack_20 = 1;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 1;
    uStack_30 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_34;
    uStack_38 = 0xffffffff;
    FUN_0045f0f3(s_Login_as_a_Guest_and_try_out_Map_0096588c);
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0045f0f3(s_Guest_Login_00965880,0xffffffff);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0074da18(0x1b3,0x131);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


