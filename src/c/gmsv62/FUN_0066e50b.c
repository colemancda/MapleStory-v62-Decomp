/* FUN_0066e50b - 0x0066e50b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066e50b(double param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float10 fVar9;
  
  iVar6 = param_3;
  iVar4 = FUN_00413367(param_3 + 0x39c);
  if (iVar4 == 0) goto LAB_0066e67f;
  iVar4 = FUN_00413367(iVar6 + 0x3a8);
  if (iVar4 < 0x127a81) {
    if (iVar4 < 0x127a7f) {
      if (iVar4 < 0x127a7b) goto LAB_0066e67f;
      if (0x127a7c < iVar4) {
        bVar8 = SBORROW4(iVar4,0x127a7e);
        iVar1 = -0x127a7e;
        bVar7 = iVar4 == 0x127a7e;
        goto LAB_0066e580;
      }
    }
  }
  else {
    if (iVar4 < 0x12a18b) goto LAB_0066e67f;
    bVar8 = SBORROW4(iVar4,0x12a18c);
    iVar1 = -0x12a18c;
    bVar7 = iVar4 == 0x12a18c;
LAB_0066e580:
    if (!bVar7 && bVar8 == iVar4 + iVar1 < 0) goto LAB_0066e67f;
  }
  param_3 = 0;
  uVar5 = FUN_00413367(iVar6 + 0x3a8);
  iVar6 = FUN_00650dae(param_4,uVar5,&param_3);
  if (iVar6 == 0) {
LAB_0066e67f:
    return (float10)param_1;
  }
  iVar6 = FUN_006509a1();
  param_4 = FUN_00413367(iVar6 + 0x154);
  fVar2 = (float)param_4 * _DAT_008ed7c0;
  FUN_006509a1();
  param_4 = FUN_00413367();
  fVar3 = (float)param_4 * _DAT_008ed7c0;
  iVar6 = FUN_00413367();
  if (iVar6 < 0x127a81) {
    if (0x127a7e < iVar6) {
      iVar6 = 3;
      goto LAB_0066e65c;
    }
    if (0x127a7a < iVar6) {
      if (iVar6 < 0x127a7d) {
        iVar6 = 2;
        goto LAB_0066e65c;
      }
      if (iVar6 < 0x127a7f) {
        iVar6 = 1;
        goto LAB_0066e65c;
      }
    }
  }
  else if ((0x12a18a < iVar6) && (iVar6 < 0x12a18d)) {
    iVar6 = 5;
    goto LAB_0066e65c;
  }
  iVar6 = 0;
LAB_0066e65c:
  fVar9 = (float10)FUN_0066e4a0((double)fVar3 * param_1,*(undefined4 *)(param_2 + iVar6 * 4),
                                (double)fVar2);
  return fVar9;
}


