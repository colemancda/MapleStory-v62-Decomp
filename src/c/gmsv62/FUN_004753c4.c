/* FUN_004753c4 - 0x004753c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004753c4(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  do {
    if (*(int *)(extraout_ECX + 0x44) == 0) {
LAB_00475489:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar1 = *(int *)(extraout_ECX + 0x48);
    uVar2 = FUN_00600ec7(iVar1,unaff_EBP + -0x14,1);
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    if (iVar1 == 0) {
      FUN_00475c7d(*(undefined4 *)(extraout_ECX + 0x48));
    }
    if (((0 < *(int *)(unaff_EBP + -0x10)) && (*(int *)(unaff_EBP + -0x14) < 1)) &&
       (((ushort)((ushort)((uint)*(undefined4 *)(extraout_ECX + 0x88) >> 0x10) ^
                 *(ushort *)(extraout_ECX + 0x72)) != 0xffc1 ||
        (0x10000 < *(ushort *)(extraout_ECX + 0x74))))) {
      FUN_0047509a(0);
      goto LAB_00475489;
    }
    if (*(int *)(unaff_EBP + -0x10) == 2) {
      FUN_00600e42(extraout_ECX + 100);
      uVar2 = *(undefined4 *)(extraout_ECX + 0x88);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0060102e(uVar2);
      uVar2 = FUN_00865db5((undefined4 *)(extraout_ECX + 0x88),4,0);
      *(undefined4 *)(extraout_ECX + 0x88) = uVar2;
      FUN_00475498(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  } while( true );
}


