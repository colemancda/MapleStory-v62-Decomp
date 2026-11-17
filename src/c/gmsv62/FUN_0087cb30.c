/* FUN_0087cb30 - 0x0087cb30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087cb30(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ushort uVar9;
  
  if (param_3 == 0) {
    return 0;
  }
  if (CONCAT22(DAT_0098201c._2_2_,(undefined2)DAT_0098201c) == 0) {
    iVar4 = FUN_0087d0b0(param_1,param_2,param_3);
    return iVar4;
  }
  FUN_0087d9ec(0x19);
  iVar4 = param_3;
  do {
    param_3 = iVar4 + -1;
    bVar1 = *param_1;
    uVar8 = (uint)bVar1;
    uVar9 = (ushort)bVar1;
    pbVar5 = param_1 + 1;
    if ((*(byte *)((int)&DAT_00982120 + uVar8 + 1) & 4) == 0) {
      if ((*(byte *)((int)&DAT_00982120 + uVar8 + 1) & 0x10) == 0x10) {
        uVar9 = (ushort)(byte)(&DAT_00982020)[uVar8];
      }
LAB_0087cc03:
      uVar8 = (uint)*param_2;
      pbVar6 = param_2 + 1;
      if ((*(byte *)((int)&DAT_00982120 + uVar8 + 1) & 4) == 0) {
        param_2 = pbVar6;
        if ((*(byte *)((int)&DAT_00982120 + uVar8 + 1) & 0x10) == 0x10) {
          uVar8 = (uint)(byte)(&DAT_00982020)[uVar8];
        }
      }
      else {
        if (param_3 != 0) {
          param_3 = iVar4 + -2;
          if (*pbVar6 != 0) {
            pbVar7 = param_2 + 2;
            uVar3 = CONCAT11(*param_2,*pbVar6);
            uVar8 = (uint)uVar3;
            param_2 = pbVar7;
            if ((uVar3 < (ushort)DAT_00982010) || (DAT_00982010._2_2_ < uVar3)) {
              if ((DAT_00982014._2_2_ <= uVar3) && (uVar3 <= (ushort)DAT_00982018)) {
                uVar8 = uVar8 + CONCAT22((undefined2)DAT_0098201c,DAT_00982018._2_2_);
              }
            }
            else {
              uVar8 = uVar8 + DAT_00982014;
            }
            goto LAB_0087cc7f;
          }
        }
        uVar8 = 0;
        param_2 = pbVar6;
      }
    }
    else {
      if (param_3 != 0) {
        bVar2 = *pbVar5;
        if (bVar2 == 0) {
          uVar9 = 0;
        }
        else {
          pbVar5 = param_1 + 2;
          uVar9 = CONCAT11(bVar1,bVar2);
          if ((uVar9 < (ushort)DAT_00982010) || (DAT_00982010._2_2_ < uVar9)) {
            if ((DAT_00982014._2_2_ <= uVar9) && (uVar9 <= (ushort)DAT_00982018)) {
              uVar9 = uVar9 + DAT_00982018._2_2_;
            }
          }
          else {
            uVar9 = uVar9 + (short)DAT_00982014;
          }
        }
        goto LAB_0087cc03;
      }
      uVar8 = (uint)*param_2;
      uVar9 = 0;
      if ((*(byte *)((int)&DAT_00982120 + uVar8 + 1) & 4) != 0) {
LAB_0087ccad:
        FUN_0087da4d(0x19);
        return 0;
      }
    }
LAB_0087cc7f:
    if (uVar9 != (ushort)uVar8) {
      FUN_0087da4d(0x19);
      return (-(uint)((ushort)uVar8 < uVar9) & 2) - 1;
    }
    if ((uVar9 == 0) || (param_1 = pbVar5, iVar4 = param_3, param_3 == 0)) goto LAB_0087ccad;
  } while( true );
}


