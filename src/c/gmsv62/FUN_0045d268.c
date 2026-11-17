/* FUN_0045d268 - 0x0045d268 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045d268(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    FUN_00464f0d(0x99);
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    FUN_00455c59(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    iVar1 = FUN_00458d57(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 8),
                         *(undefined4 *)(unaff_EBP + 0xc));
    if (0 < iVar1) {
      FUN_0060142b(0xc6,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00457cda(0xd);
      FUN_00457fa0(unaff_EBP + 8,8);
      FUN_00457cda(*(undefined4 *)(unaff_EBP + 0x10));
      FUN_004751b2(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar2 = 1;
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      FUN_0045ebca();
      goto LAB_0045d326;
    }
  }
  uVar2 = 0;
LAB_0045d326:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


