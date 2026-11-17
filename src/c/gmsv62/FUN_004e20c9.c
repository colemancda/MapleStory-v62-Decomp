/* FUN_004e20c9 - 0x004e20c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e20c9(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x28) = 0x1d4;
  *(undefined4 *)(unaff_EBP + -0x24) = 0x5a;
  *(undefined4 *)(unaff_EBP + -0x20) = 500;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x68;
  iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 8),
                          *(undefined4 *)(unaff_EBP + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_008ea6b8;
    iVar1 = DAT_00978368;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004e2321();
    FUN_004e2217(iVar1 + 0x322c);
    FUN_004e2321();
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_008161f1(0);
      iVar1 = FUN_004029b9(0xb8);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_005adfe1(unaff_EBP + -0x3c);
      }
      uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
      *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004e2260();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004bc6a2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004e227d();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_008ea6b8;
    FUN_004e2321();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


