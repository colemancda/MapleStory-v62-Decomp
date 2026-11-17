/* FUN_00494214 - 0x00494214 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00494214(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_0045e2eb();
  if (iVar1 / 1000000 == 1) {
    iVar1 = *(int *)(unaff_EBP + 0xc);
    uVar3 = FUN_0045e2eb();
    FUN_0045b593(uVar3,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
  }
  else {
    iVar1 = FUN_0045e2eb();
    iVar2 = iVar1 / 1000000;
    if ((((iVar2 == 1) || (iVar2 < 2)) || (iVar2 < 5)) || ((iVar2 != 5 || (iVar1 / 10000 != 500))))
    {
      uVar3 = FUN_0045e2eb();
      iVar1 = FUN_0048b5b3(uVar3);
      if (iVar1 == 6) {
        uVar3 = FUN_0045e2eb();
        FUN_0045b5c7(uVar3);
      }
      else {
        uVar3 = FUN_0045e2eb();
        iVar2 = FUN_0048b5b3(uVar3);
        iVar1 = *(int *)(unaff_EBP + 0xc);
        if (iVar2 == 9) {
          uVar3 = FUN_0045e2eb();
          FUN_0045b5d9(uVar3,*(undefined4 *)(iVar1 + 0xc));
        }
        else {
          uVar3 = FUN_0045e2eb();
          iVar1 = FUN_0048b5b3(uVar3);
          if (iVar1 == 10) {
            uVar3 = FUN_0045e2eb();
            FUN_0045b5ef(uVar3);
          }
          else {
            uVar3 = FUN_0045e2eb();
            iVar1 = FUN_0048b5b3(uVar3);
            if (iVar1 == 0xf) {
              uVar3 = FUN_0045e2eb();
              FUN_0045b601(uVar3);
            }
            else {
              uVar3 = FUN_0045e2eb();
              iVar2 = FUN_0048b5b3(uVar3);
              iVar1 = *(int *)(unaff_EBP + 0xc);
              if (iVar2 == 0x11) {
                uVar3 = FUN_0045e2eb();
                FUN_0045b613(uVar3,*(undefined4 *)(iVar1 + 0xc));
              }
              else {
                uVar3 = FUN_0045e2eb();
                iVar2 = FUN_0048b5b3(uVar3);
                iVar1 = *(int *)(unaff_EBP + 0xc);
                if (iVar2 == 4) {
                  uVar3 = FUN_0045e2eb();
                  FUN_0045b629(uVar3,*(undefined4 *)(iVar1 + 0xc));
                }
                else {
                  uVar3 = FUN_0045e2eb();
                  iVar2 = FUN_0048b5b3(uVar3);
                  iVar1 = *(int *)(unaff_EBP + 0xc);
                  if (iVar2 == 0xb) {
                    uVar3 = FUN_0045e2eb();
                    FUN_0045b63f(uVar3,*(undefined4 *)(iVar1 + 0xc));
                  }
                  else {
                    uVar3 = FUN_0045e2eb();
                    iVar1 = FUN_0048b5b3(uVar3);
                    if (iVar1 != 0x1f) {
                      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                      if (*(int *)(unaff_EBP + 0xc) != 0) {
                        FUN_0045e794(0);
                      }
                      uVar3 = 0;
                      goto LAB_00494476;
                    }
                    iVar1 = *(int *)(unaff_EBP + 0xc);
                    uVar3 = FUN_0045e2eb();
                    FUN_0045b655(uVar3,*(undefined4 *)(iVar1 + 0xc));
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(unaff_EBP + 0xc);
      uVar3 = FUN_0045e2eb();
      FUN_0045b5ad(uVar3,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0045e794(0);
  }
  uVar3 = 1;
LAB_00494476:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


