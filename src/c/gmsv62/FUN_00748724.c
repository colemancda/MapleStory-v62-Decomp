/* FUN_00748724 - 0x00748724 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00748724(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = *(uint *)(extraout_ECX + 0xbd0);
  do {
    if (uVar3 == 0) {
LAB_007487aa:
      FUN_00748a2d();
      FUN_00414f8b(unaff_EBP + 8);
      if (10 < *(uint *)(extraout_ECX + 0xbcc)) {
        FUN_00748a70(*(undefined4 *)(extraout_ECX + 0xbd4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(uint *)(unaff_EBP + -0x14) = uVar3;
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414f8b(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_0045ec92(unaff_EBP + 8);
    if (iVar2 != 0) {
      FUN_00748a70(*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      goto LAB_007487aa;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  } while( true );
}


