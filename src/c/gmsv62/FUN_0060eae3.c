/* FUN_0060eae3 - 0x0060eae3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060eae3(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x188) != 0) {
    FUN_0060142b(0x6f,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(0xb);
    FUN_00457cda(1);
    FUN_004751b2(unaff_EBP + -0x1c);
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1e0) + 4) + 0x1c))(0);
    *(undefined4 *)(extraout_ECX + 0x184) = 1;
    *(undefined4 *)(DAT_00978368 + 0x2d08) = 1;
    FUN_0060f8d6();
    FUN_008161f1(0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


