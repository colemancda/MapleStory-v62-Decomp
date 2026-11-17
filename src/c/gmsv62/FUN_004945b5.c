/* FUN_004945b5 - 0x004945b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004945b5(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  iVar4 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = 2;
  if (iVar4 == 2) {
    uVar1 = FUN_0045e2eb();
    iVar2 = FUN_0054e7b3(uVar1);
    iVar4 = iVar3;
    if (iVar2 == 0) {
      iVar3 = FUN_0045e2eb();
      if (iVar3 / 10000 == 0x38e) {
        uVar5 = 0;
        do {
          iVar3 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x5c);
          if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar5)) break;
          FUN_0084a5e4(unaff_EBP + -0x14,*(undefined4 *)(iVar3 + uVar5 * 4));
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iVar3 = FUN_0045e2eb();
          if (iVar3 != 0) {
            uVar1 = FUN_0045e2eb();
            iVar3 = FUN_0054e7b3(uVar1);
            if (iVar3 != 0) {
              iVar4 = FUN_0045e2eb();
              if (iVar4 / 1000000 == 1) {
                iVar4 = (iVar4 / 1000) % 10;
                if (iVar4 != 2) {
                  *(undefined1 *)(unaff_EBP + -4) = 0;
                  if (*(int *)(unaff_EBP + -0x10) != 0) {
                    FUN_0045e794(0);
                    *(undefined4 *)(unaff_EBP + -0x10) = 0;
                  }
                  break;
                }
              }
              else {
                iVar4 = 2;
              }
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_0045e794(0);
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          uVar5 = uVar5 + 1;
        } while( true );
      }
    }
    else {
      iVar3 = FUN_0045e2eb();
      if (iVar3 / 1000000 == 1) {
        iVar4 = (iVar3 / 1000) % 10;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0045e794(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


