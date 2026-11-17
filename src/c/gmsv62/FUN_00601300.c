/* FUN_00601300 - 0x00601300 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00601300(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_008282ba(0x40000000,0,0,4,0x80000000,0);
  iVar2 = (*DAT_0097b44c)(uVar1);
  if (iVar2 != -1) {
    (*DAT_0097b460)(iVar2,0,0,2);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(s_Invalid_Decoding_00965c40,0xffffffff);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar1 = FUN_00601254(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004653c5(unaff_EBP + -0x1c,s_PacketDump___00965c30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0045e02d(unaff_EBP + -0x18,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar1 = FUN_004653c5(unaff_EBP + -0x14,&DAT_00964314);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    uVar3 = FUN_00415015(0,1);
    uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
    uVar3 = (*DAT_0097b4c0)(uVar3,unaff_EBP + -0x24,0);
    (*DAT_0097b454)(iVar2,uVar1,uVar3);
    FUN_004150c0(0xffffffff);
    (*DAT_0097b388)(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


