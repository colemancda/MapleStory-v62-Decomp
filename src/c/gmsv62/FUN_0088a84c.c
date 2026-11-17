/* FUN_0088a84c - 0x0088a84c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0088a84c(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  
  piVar3 = param_2;
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar6 & 0x82) == 0) || ((uVar6 & 0x40) != 0)) {
LAB_0088a965:
    param_2[3] = uVar6 | 0x20;
  }
  else {
    if ((uVar6 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar6 & 0x10) == 0) goto LAB_0088a965;
      *param_2 = param_2[2];
      param_2[3] = uVar6 & 0xfffffffe;
    }
    uVar6 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar3[3] = uVar6 & 0xffffffef | 2;
    if (((uVar6 & 0x10c) == 0) &&
       (((piVar3 != (int *)&DAT_00972a80 && (piVar3 != (int *)&DAT_00972aa0)) ||
        (iVar4 = FUN_00886226(uVar1), iVar4 == 0)))) {
      FUN_008861e2(piVar3);
    }
    uVar6 = param_1;
    if ((*(ushort *)(piVar3 + 3) & 0x108) == 0) {
      iVar4 = 2;
      param_2 = (int *)FUN_00885ff2(uVar1,&param_1,2);
    }
    else {
      iVar2 = piVar3[2];
      iVar4 = *piVar3 - iVar2;
      *piVar3 = iVar2 + 2;
      piVar3[1] = piVar3[6] + -2;
      if (iVar4 < 1) {
        if (uVar1 == 0xffffffff) {
          puVar5 = &DAT_00972cf0;
        }
        else {
          puVar5 = (undefined *)((&DAT_00980ee0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
        }
        if ((puVar5[4] & 0x20) != 0) {
          FUN_00885f1a(uVar1,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_00885ff2(uVar1,iVar2,iVar4);
      }
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
    if (param_2 == (int *)iVar4) {
      return uVar6 & 0xffff;
    }
    piVar3[3] = piVar3[3] | 0x20;
  }
  return 0xffff;
}


