/* FUN_0083af5d - 0x0083af5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083af5d(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  if (DAT_0097846c != 0) {
    uVar3 = extraout_ECX;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8e3);
    uVar1 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar1,uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    if (DAT_0097846c != 0) {
      FUN_00815de9();
      if (DAT_0097846c != 0) {
        (*(code *)**(undefined4 **)(DAT_0097846c + 8))(1);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


