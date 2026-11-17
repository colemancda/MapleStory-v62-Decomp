/* FUN_00794e31 - 0x00794e31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00794e31(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0x86) {
    (**(code **)(*extraout_ECX + 0x24))(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0xc));
  }
  else {
    uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0079daa2(unaff_EBP + 0xc,unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(unaff_EBP + 8) == 0x87) {
        FUN_0067dcf3(uVar1);
        FUN_0079dd08(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 300));
        FUN_0079dc0b(unaff_EBP + 0xc);
        FUN_005d0fed();
      }
      iVar2 = *(int *)(unaff_EBP + 8);
      if (iVar2 == 0x88) {
        FUN_0067e084(uVar1);
      }
      else if (iVar2 == 0x89) {
        FUN_0067e0a5(uVar1);
      }
      else if (iVar2 == 0x8a) {
        FUN_0067e5d8(uVar1);
      }
      else if (iVar2 == 0x8b) {
        FUN_0067e63c(uVar1);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_005d0fed();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


