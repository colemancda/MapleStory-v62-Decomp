/* FUN_00490bc5 - 0x00490bc5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00490bc5(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  FUN_00879bb8();
  iStack_30 = 0x490bdc;
  iVar1 = (*DAT_0097b704)();
  if ((*(int *)(extraout_ECX + 0x734) != 0) &&
     (DAT_00964bf8 < (uint)(iVar1 - *(int *)(extraout_ECX + 0x730)))) {
    iVar1 = *(int *)(extraout_ECX + 0x168);
    if ((-1 < iVar1) &&
       ((iVar1 < *(int *)(extraout_ECX + 0x164) && (-1 < *(int *)(extraout_ECX + 0x170 + iVar1 * 4))
        ))) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      bVar2 = DAT_00978368 != 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (bVar2) {
        iStack_30 = *(undefined4 *)(extraout_ECX + 0x170 + iVar1 * 4);
        iStack_34 = unaff_EBP + -0x20;
        uStack_38 = 0x490c45;
        iStack_30 = FUN_004903a3();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_34 = 0x490c52;
        FUN_0045e10e();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          iStack_30 = 0;
          iStack_34 = 0x490c63;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
      }
      iStack_30 = *(undefined4 *)(extraout_ECX + 0x168);
      iStack_34 = unaff_EBP + -0x30;
      uStack_38 = 0x490c77;
      FUN_004927e9();
      iStack_30 = *(int *)(unaff_EBP + -0x24) + -0x19;
      iStack_34 = *(int *)(unaff_EBP + -0x30) + 0x37;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_3c;
      FUN_0045e0ed(unaff_EBP + -0x18);
      FUN_00493e93();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        iStack_30 = 0;
        iStack_34 = 0x490cae;
        FUN_0045e794();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    *(undefined4 *)(extraout_ECX + 0x734) = 0;
  }
  iStack_30 = 0x490cbe;
  FUN_008162ff();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


