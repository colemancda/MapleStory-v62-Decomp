/* FUN_007b9df7 - 0x007b9df7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_007b9df7(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  
  iVar3 = FUN_007b04b6();
  if ((iVar3 == 0) && ((param_1[0x14b] & 0xfffffffeU) != 10)) {
    if (param_2 != (int *)0x0) {
      iVar3 = (**(code **)(*param_1 + 4))();
      FUN_0044dddc(param_1[0x129]);
      pcVar1 = (code *)*param_2;
      if ((int)pcVar1 < 0x4dfcdd) {
        if (pcVar1 == ptr_004dfcda) {
LAB_007b9ec7:
          cVar2 = (**(code **)(**(int **)(iVar3 + 0x958) + 4))();
          bVar6 = cVar2 == '\0';
LAB_007b9ed4:
          if (bVar6) goto LAB_007b9ed6;
        }
        else if (0x10f3da < (int)pcVar1) {
          if (0x10f3de < (int)pcVar1) {
            if (pcVar1 == (code *)0x127a7a) {
              iVar3 = FUN_00413367(iVar3 + 0x39c,*(undefined4 *)(iVar3 + 0x3a4));
            }
            else {
              if (pcVar1 != (code *)0x406849) {
                if (pcVar1 == ptr_004dfcda) goto LAB_007b9ec7;
                goto LAB_007b9e6c;
              }
              iVar3 = FUN_004bed04();
            }
LAB_007b9ea8:
            bVar6 = iVar3 == 0;
            goto LAB_007b9ed4;
          }
          iVar3 = FUN_00413367(iVar3 + 0x36c,*(undefined4 *)(iVar3 + 0x374));
          if (iVar3 < 2) goto LAB_007b9ed6;
        }
      }
      else {
        if (pcVar1 == ptr_004dfcda) {
          iVar3 = FUN_0043f79a();
          goto LAB_007b9ea8;
        }
        if (((pcVar1 == ptr_004e23ec) || (pcVar1 == ptr_004e23ec)) &&
           ((iVar4 = FUN_0043f79a(), iVar4 == 0 ||
            (puVar5 = (undefined *)FUN_00413367(iVar3 + 0x534,*(undefined4 *)(iVar3 + 0x53c)),
            puVar5 != &DAT_004e23eb)))) goto LAB_007b9ed6;
      }
    }
LAB_007b9e6c:
    iVar3 = FUN_007a71f1(param_2,param_3,0,0,0,0,0);
    param_1[0x7b6] = iVar3;
  }
  else {
LAB_007b9ed6:
    iVar3 = 0;
  }
  return iVar3;
}


