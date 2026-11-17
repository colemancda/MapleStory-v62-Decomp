/* FUN_005697ac - 0x005697ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005697ac(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x150) < *(int *)(extraout_ECX + 0x13c)) &&
     (*(int *)(extraout_ECX + 0x140) == 0)) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_00579f8f(7,extraout_ECX + 0x1ac);
    }
    if (iVar1 == 0) {
      if ((*(int *)(unaff_EBP + 0xc) != 0) && (DAT_00978364 != 0)) {
        FUN_00817f6e(*(undefined4 *)(unaff_EBP + 0xc));
      }
    }
    else {
      if (DAT_0097c1ac == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_005698b4();
      FUN_00826c3b();
      if ((DAT_00979430 == 0) && (*(int *)(extraout_ECX + 0x150) == 0)) {
        iVar1 = FUN_004029b9(0x5c0);
        *(int *)(unaff_EBP + 0xc) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar1 != 0) {
          FUN_00589f5b(extraout_ECX);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else if ((*(int *)(extraout_ECX + 0x150) == 1) ||
              ((*(int *)(extraout_ECX + 0x15c) != 0 &&
               (*(int *)(*(int *)(extraout_ECX + 0x15c) + -4) != 0)))) {
        FUN_0056ab22();
      }
      FUN_00564909(*(undefined4 *)(extraout_ECX + 0x150));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


