/* FUN_007a5b1a - 0x007a5b1a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a5b1a(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x1e64) == 0) {
    iVar1 = FUN_0050d2d6();
    if (iVar1 == 0) {
      iVar1 = FUN_007a3f46();
      if (iVar1 == 0) {
        iVar1 = FUN_007b3c5d();
        if (iVar1 == 0) {
          if (*(int *)(extraout_ECX + 0x4f4) == 0) {
            iVar1 = FUN_0043fb62();
            if (iVar1 == 0) {
              iVar2 = FUN_0043fb93();
              iVar1 = DAT_00978368;
              if (iVar2 == 0) {
                iVar2 = FUN_004becbc(200,0);
                if (iVar2 == 0) goto LAB_007a5c86;
                iVar5 = -1;
                iVar2 = FUN_004cd670(extraout_ECX + 0x1ef0,*(undefined4 *)(extraout_ECX + 0x1ef8));
                if (iVar2 == 0) {
                  if ((*(int *)(extraout_ECX + 0x1e64) != 0) || (0 < *(int *)(extraout_ECX + 0x528))
                     ) goto LAB_007a5c86;
                  iVar2 = FUN_007a5c95();
                  if (iVar2 == 0) goto LAB_007a5c86;
                  puVar3 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
                  uVar4 = puVar3[1];
                  uVar6 = *puVar3;
                  FUN_00429303(uVar6,uVar4);
                  iVar5 = FUN_004efa7c(uVar6,uVar4);
                  if (iVar5 < 0) goto LAB_007a5c86;
                }
                FUN_0060142b(0x27,0,0);
                *(undefined4 *)(unaff_EBP + -4) = 1;
                FUN_0045d247(iVar5);
                FUN_004751b2(unaff_EBP + -0x20);
                *(undefined4 *)(iVar1 + 0x208c) = 1;
                uVar4 = FUN_007d1e08();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                *(undefined4 *)(iVar1 + 0x2090) = uVar4;
                FUN_0045ebca();
                goto LAB_007a5c86;
              }
            }
          }
          uVar4 = FUN_00679d22(unaff_EBP + -0x10,0xd8b);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_00471102(uVar4,0xc);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
        }
      }
    }
  }
LAB_007a5c86:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


