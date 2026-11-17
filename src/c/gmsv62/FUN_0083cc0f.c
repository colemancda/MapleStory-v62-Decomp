/* FUN_0083cc0f - 0x0083cc0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083cc0f(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0x4fae6f) {
    (**(code **)(*DAT_00978358 + 4))();
    iVar2 = FUN_00793618();
    if (iVar2 != 0) {
      FUN_00455c59(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        uVar3 = FUN_00650dae(*(undefined4 *)(unaff_EBP + -0x10),0x4faa8e,0);
        uVar1 = FUN_0045f03e(*(int *)(unaff_EBP + -0x10) + 0x33,
                             *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x35));
        uVar3 = FUN_0065435f(0x4faa8e,uVar3,uVar1);
        FUN_00685284(0x4faa8e,*(undefined4 *)(unaff_EBP + 0xc),uVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_0045e7c2(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
  }
  FUN_004b8f75(unaff_EBP + 8,unaff_EBP + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


