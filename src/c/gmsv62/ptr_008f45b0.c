/* ptr_008f45b0 - 0x008f45b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x008f4eec) overlaps instruction at (ram,0x008f4ee9)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x008f486e) */
/* WARNING: Removing unreachable block (ram,0x008f4879) */
/* WARNING: Removing unreachable block (ram,0x008f4809) */
/* WARNING: Removing unreachable block (ram,0x008f46e1) */
/* WARNING: Removing unreachable block (ram,0x008f46e3) */
/* WARNING: Removing unreachable block (ram,0x008f4807) */
/* WARNING: Removing unreachable block (ram,0x008f4748) */
/* WARNING: Removing unreachable block (ram,0x008f4ac4) */
/* WARNING: Removing unreachable block (ram,0x008f4b38) */
/* WARNING: Removing unreachable block (ram,0x008f4943) */
/* WARNING: Removing unreachable block (ram,0x008f46ac) */
/* WARNING: Removing unreachable block (ram,0x008f463d) */
/* WARNING: Removing unreachable block (ram,0x008f4640) */
/* WARNING: Removing unreachable block (ram,0x008f4957) */
/* WARNING: Removing unreachable block (ram,0x008f4878) */
/* WARNING: Removing unreachable block (ram,0x008f487e) */
/* WARNING: Removing unreachable block (ram,0x008f48ee) */
/* WARNING: Removing unreachable block (ram,0x008f4afc) */
/* WARNING: Removing unreachable block (ram,0x008f4897) */
/* WARNING: Removing unreachable block (ram,0x008f4676) */
/* WARNING: Removing unreachable block (ram,0x008f4c86) */
/* WARNING: Removing unreachable block (ram,0x008f488b) */

void __fastcall
ptr_008f45b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9,uint *param_10,uint *param_11,uint *param_12,
            uint *param_13,char *param_14,uint *param_15,uint *param_16,undefined4 *param_17,
            uint *param_18,uint *param_19,uint *param_20,uint *param_21,uint *param_22,
            uint *param_23,uint *param_24,uint *param_25,uint *param_26,uint *param_27,
            uint *param_28,uint *param_29,uint *param_30,uint *param_31,uint *param_32,
            uint *param_33,uint *param_34,uint *param_35,uint *param_36,uint *param_37,
            uint *param_38,uint *param_39,uint *param_40,uint *param_41,uint *param_42,
            undefined4 param_43,uint *param_44,uint *param_45,uint *param_46,uint *param_47,
            undefined2 param_48)

{
  int *piVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar13;
  short sVar14;
  uint *in_EAX;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  char *pcVar18;
  byte bVar23;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar24;
  int extraout_ECX;
  byte bVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  uint *unaff_EBX;
  uint *puVar29;
  byte *pbVar30;
  uint uVar31;
  undefined4 *puVar33;
  ushort uVar34;
  uint *unaff_EBP;
  uint *puVar35;
  uint *puVar36;
  undefined4 *unaff_ESI;
  byte *pbVar37;
  uint *puVar38;
  undefined1 *puVar39;
  undefined4 *puVar40;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  int iVar44;
  uint *unaff_EDI;
  uint *puVar45;
  undefined4 *puVar46;
  short in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  int in_GS_OFFSET;
  bool in_CF;
  bool bVar47;
  byte bVar48;
  byte in_AF;
  bool in_ZF;
  bool bVar49;
  byte in_TF;
  byte bVar50;
  bool bVar51;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar52;
  undefined2 unaff_retaddr;
  undefined2 unaff_retaddr_00;
  undefined4 in_stack_000000d8;
  undefined1 *puStack_44;
  undefined2 uStack_30;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_14;
  undefined4 uStack_10;
  char *pcStack_8;
  undefined1 uStack_4;
  byte bVar12;
  undefined3 uVar32;
  
  puVar16 = param_31;
  puVar15 = param_15;
  pcVar18 = param_14;
  puVar17 = param_13;
  puVar38 = param_9;
  bVar23 = param_31._1_1_;
  bVar12 = (byte)param_31;
  bVar50 = (byte)param_14;
  puVar3 = (undefined1 *)CONCAT22(param_36._0_2_,param_35._2_2_);
  puVar7 = (uint *)CONCAT22((ushort)param_34,param_33._2_2_);
  uStack_4 = SUB41(unaff_EBP,0);
  param_31._0_1_ = (byte)((uint)param_29 >> 0x10);
  bVar48 = (byte)param_31;
  param_31._1_1_ = (byte)((uint)param_29 >> 0x18);
  bVar8 = param_31._1_1_;
  bVar25 = (byte)((uint)param_37 >> 0x10);
  bVar47 = true;
  uVar34 = (ushort)param_10;
  uVar27 = SUB42(param_5,0);
  uVar28 = SUB42(param_30,0);
  puVar35 = unaff_EBP;
  puVar36 = param_7;
  puVar43 = param_11;
  puVar40 = param_17;
  if (in_CF) {
s_rg_008f4620_8:
    if (bVar47) {
code_r0x008f4691:
      out(*(undefined1 *)unaff_ESI,(short)param_2);
      *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
      bVar47 = (byte *)((int)param_2 + 1) == (byte *)0x0;
      bVar50 = in((short)(byte *)((int)param_2 + 1));
      *(byte *)unaff_EDI = bVar50;
      segment(in_DS,(short)unaff_EDI + 0x6e);
      in_EAX = param_23;
      param_1 = param_22;
      param_2 = param_21;
      puVar29 = param_20;
      puVar35 = param_18;
      puVar17 = param_16;
code_r0x008f46a7:
      out(*(undefined1 *)puVar40,(short)param_2);
      puVar38 = (uint *)((longlong)(int)puVar29[0x1a] * 0x73614200);
      puVar41 = puVar38;
      if ((longlong)(int)puVar38 != (longlong)(int)puVar29[0x1a] * 0x73614200) {
code_r0x008f46b1:
        pbVar37 = (byte *)(in_GS_OFFSET + (int)in_EAX);
        bVar50 = *pbVar37;
        *pbVar37 = *pbVar37 + (byte)in_EAX;
        bVar47 = *pbVar37 == 0;
        param_9._0_1_ = (byte)puVar29;
        param_9._1_1_ = (undefined1)((uint)puVar29 >> 8);
        param_9._2_2_ = (undefined2)((uint)puVar29 >> 0x10);
        unaff_EDI = puVar17;
        param_7 = puVar36;
        if (!CARRY1(bVar50,(byte)in_EAX) && !bVar47) goto code_r0x008f471c;
code_r0x008f46b7:
        puVar38 = (uint *)((int)puVar41 + 1);
        out((byte)*puVar41,(short)param_2);
        bVar47 = CARRY1((byte)*in_EAX,(byte)in_EAX);
        *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
        bVar50 = (byte)*in_EAX;
        puVar17 = unaff_EDI;
        puVar36 = param_7;
code_r0x008f46bc:
        param_17._0_2_ = SUB42(puVar29,0);
        param_17._2_2_ = (short)((uint)puVar29 >> 0x10);
        puVar41 = puVar17;
        if (bVar47 || bVar50 == 0) {
code_r0x008f46bf:
          bVar50 = in((short)param_2);
          *(byte *)puVar41 = bVar50;
          out((byte)*param_10,CONCAT11(param_14._1_1_,(byte)param_14));
          pbVar37 = (byte *)((int)User32Reserved + (int)((int)param_15 + 0x1f));
          *pbVar37 = *pbVar37 + (char)param_15;
          uVar13 = in(CONCAT11(param_14._1_1_,(byte)param_14));
          *(undefined1 *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9)) = uVar13;
          out((byte)*param_18,param_22._0_2_);
          pbVar37 = (byte *)CONCAT22(unaff_retaddr_00,unaff_retaddr);
          in_EAX = param_8;
          param_2 = param_6;
          puVar35 = param_3;
          puVar41 = unaff_EBP;
code_r0x008f46db:
          uVar27 = SUB42(param_2,0);
          out(*pbVar37,uVar27);
          sVar14 = -((ushort)*puVar35 & 3);
          *(ushort *)puVar35 = (short)*puVar35 + (ushort)(0 < sVar14) * sVar14;
          pbVar37[0x73] = pbVar37[0x73] + (char)in_EAX;
          out(pbVar37[1],uVar27);
          sVar14 = ((ushort)puVar35 & 3) - ((ushort)*in_EAX & 3);
          *(ushort *)in_EAX = (short)*in_EAX + (ushort)(0 < sVar14) * sVar14;
          pbVar37[0x6b] = pbVar37[0x6b] + (char)in_EAX;
          out(pbVar37[2],uVar27);
          bVar50 = in(uVar27);
          *(byte *)puVar41 = bVar50;
          uVar27 = CONCAT11(param_14._1_1_,(byte)param_14);
          out((byte)*param_10,uVar27);
          pbVar37 = (byte *)((int)User32Reserved + (int)((int)param_10 + 0x26));
          *pbVar37 = *pbVar37 + (byte)param_16;
          bVar47 = *pbVar37 == 0;
          out(*(byte *)((int)param_10 + 1),uVar27);
          out(*(byte *)((int)param_10 + 2),uVar27);
          goto code_r0x008f46fb;
        }
        bVar47 = false;
        if (bVar50 != 0) goto code_r0x008f4726;
        puVar17 = puVar29 + 0x1b;
        uVar20 = *puVar17;
        bVar50 = (byte)((uint)param_2 >> 8);
        *(byte *)puVar17 = (byte)*puVar17 + bVar50;
        puVar41 = puVar38 + 1;
        uVar27 = SUB42(param_2,0);
        out(*puVar38,uVar27);
        puVar15 = in_EAX;
        if (!CARRY1((byte)uVar20,bVar50) && (byte)*puVar17 != 0) goto code_r0x008f478d;
        goto code_r0x008f47ee;
      }
code_r0x008f4726:
      uVar27 = SUB42(param_2,0);
      puVar41 = puVar38;
      if (bVar47) goto code_r0x008f478d;
code_r0x008f472a:
      bVar50 = (byte)in_EAX;
      bVar51 = CARRY1((byte)*in_EAX,bVar50);
      bVar47 = SCARRY1((byte)*in_EAX,bVar50);
      *(byte *)in_EAX = (byte)*in_EAX + bVar50;
      if ((byte)*in_EAX == 0) {
        sVar14 = (short)(puVar35[0x19] * 0x6e696b2d);
        puVar40 = (undefined4 *)segment(in_FS,sVar14);
        pbVar37 = (byte *)CONCAT22((short)(puVar35[0x19] * 0x6e696b2d >> 0x10),sVar14 + 4);
        out(*puVar40,(short)param_2);
        puVar41 = puVar17 + 1;
        uVar20 = in((short)param_2);
        *puVar17 = uVar20;
        *(byte *)in_EAX = (byte)*in_EAX + bVar50;
        bVar47 = (byte)*in_EAX == 0;
code_r0x008f473c:
        bVar50 = (byte)((uint)param_1 >> 8);
        if (bVar47) {
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          goto code_r0x008f47aa;
        }
        pbVar37 = (byte *)((int)puVar41 + (*(int *)(pbVar37 + 0x69) * 0x20646164 + 0x31) * 2);
        *pbVar37 = *pbVar37 & (byte)((uint)param_2 >> 8);
        puVar39 = (undefined1 *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9));
        uVar27 = CONCAT11(param_14._1_1_,(byte)param_14);
        puVar35 = (uint *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16));
        puVar40 = (undefined4 *)segment(in_DS,uVar34);
        out(*puVar40,uVar27);
        *(byte *)puVar35 = (byte)*puVar35 + (byte)param_16;
        pbVar37 = (byte *)((int)param_13 + 0x6f);
        *pbVar37 = *pbVar37 + param_14._1_1_;
        bVar50 = param_15._1_1_;
        if (*pbVar37 == 0) {
          param_16._0_1_ = 0x2d;
          param_16._1_1_ = 0x6b;
          param_16._2_2_ = 0x726f;
          puVar41 = (uint *)0x726f6b2d;
          pbVar37 = (byte *)((int)param_20 + 0x6f);
          *pbVar37 = *pbVar37 + (char)((uint)param_21 >> 8);
          bVar47 = *pbVar37 == 0;
          in_EAX = param_23;
          param_1 = param_22;
          param_2 = param_21;
          goto code_r0x008f475e;
        }
        goto code_r0x008f47cd;
      }
      bVar49 = false;
      puVar41 = puVar36;
      if (!bVar47) goto code_r0x008f479e;
code_r0x008f4810:
      if (bVar49) {
        pbVar37 = (byte *)CONCAT22(param_8._2_2_,CONCAT11(param_8._1_1_,(char)param_8));
        iVar44 = CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9));
        in_EAX = (uint *)CONCAT22(param_14._2_2_,CONCAT11(param_14._1_1_,(byte)param_14));
        puVar35 = param_12;
        puVar41 = puVar36;
code_r0x008f4813:
        uVar27 = SUB42(puVar35,0);
        *(char *)(iVar44 + 0x73) = *(char *)(iVar44 + 0x73) + (char)((uint)puVar35 >> 8);
        bVar50 = (byte)in_EAX;
        bVar51 = CARRY1((byte)*in_EAX,bVar50);
        bVar47 = SCARRY1((byte)*in_EAX,bVar50);
        *(byte *)in_EAX = (byte)*in_EAX + bVar50;
        if ((byte)*in_EAX == 0) {
          bVar47 = CARRY1((byte)*in_EAX,bVar50);
          *(byte *)in_EAX = (byte)*in_EAX + bVar50;
          bVar10 = (byte)*in_EAX;
          goto code_r0x008f481c;
        }
      }
      bVar49 = false;
      puVar35 = (uint *)CONCAT22(param_8._2_2_,CONCAT11(param_8._1_1_,(char)param_8));
      puVar29 = (uint *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9));
      puVar38 = (uint *)CONCAT22(param_14._2_2_,CONCAT11(param_14._1_1_,(byte)param_14));
      puVar43 = param_13;
      puVar17 = param_12;
      puVar15 = puVar36;
      if (!bVar51) goto code_r0x008f48ec;
      if (!bVar47) goto code_r0x008f48eb;
code_r0x008f494c:
      sVar14 = -((ushort)*param_13 & 3);
      *(ushort *)param_13 = (short)*param_13 + (ushort)(0 < sVar14) * sVar14;
      *(byte *)(param_11 + 0x1c) = (byte)param_11[0x1c] + (char)((uint)param_12 >> 8);
      out(*(undefined1 *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16)),
          param_20._0_2_);
      puVar38 = param_22;
      puVar43 = param_21;
      puVar17 = param_20;
      param_11 = param_19;
      puVar29 = (uint *)CONCAT22(param_17._2_2_,param_17._0_2_);
      puVar35 = (uint *)CONCAT22(param_15._2_2_,CONCAT11(param_15._1_1_,(char)param_15));
    }
    else {
      uVar20 = *in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
      puVar29 = (uint *)((int)unaff_EBX + 1);
      bVar47 = puVar29 == (uint *)0x0;
      out(*unaff_ESI,(short)param_2);
      if (!CARRY1((byte)uVar20,(byte)in_EAX)) {
        param_16._0_1_ = (byte)puVar29;
        param_16._1_1_ = (undefined1)((uint)puVar29 >> 8);
        param_16._2_2_ = (undefined2)((uint)puVar29 >> 0x10);
        puVar40 = unaff_ESI + 1;
        puVar17 = unaff_EDI;
        if (SCARRY4((int)unaff_EBX,1)) {
          in_EAX = in_EAX + -0x185c9508;
          goto code_r0x008f470d;
        }
        goto code_r0x008f46a7;
      }
      *(byte *)((int)param_21 + 0x69) = *(byte *)((int)param_21 + 0x69) & (byte)param_21;
      sVar14 = -((ushort)*param_22 & 3);
      *(ushort *)param_22 = (short)*param_22 + (ushort)(0 < sVar14) * sVar14;
      *(byte *)((int)param_20 + 0x77) = *(byte *)((int)param_20 + 0x77) + (byte)param_21;
      in_EAX = param_23;
      unaff_EDI = param_16;
code_r0x008f463a:
      pbVar37 = (byte *)((int)unaff_EDI + -0x200f8b);
      bVar50 = *pbVar37;
      *pbVar37 = *pbVar37 + (byte)in_EAX;
      if (*pbVar37 == 0) {
        param_1 = param_30;
        param_2 = param_29;
        puVar29 = param_28;
        puVar35 = param_26;
        puVar17 = param_24;
        if (CARRY1(bVar50,(byte)in_EAX)) {
          *(byte *)puVar16 = (byte)*puVar16 + bVar12;
          in_EAX = puVar16;
          puVar41 = param_25;
          goto code_r0x008f46b1;
        }
        in_EAX = (uint *)((int)puVar16 + -0x74617473);
        goto code_r0x008f472a;
      }
      uVar20 = in(param_29._0_2_);
      *param_24 = uVar20;
      bVar50 = in(param_37._0_2_);
      *(byte *)puVar36 = bVar50;
      puVar35 = param_47;
      puVar29 = param_45;
      puVar41 = param_44;
      puVar42 = param_41;
      param_2 = puVar36;
code_r0x008f464d:
      param_7._0_2_ = SUB42(param_2,0);
      *(byte *)puVar35 = (byte)*puVar35 + (char)puVar35;
      *(byte *)((int)puVar41 + 0x61) = *(byte *)((int)puVar41 + 0x61) + (char)puVar35;
      out((byte)*puVar42,(short)puVar29);
      puVar41 = (uint *)CONCAT22(unaff_retaddr_00,unaff_retaddr);
      bVar47 = CARRY1((byte)*param_9,(byte)param_9);
      bVar51 = SCARRY1((byte)*param_9,(byte)param_9);
      *(byte *)param_9 = (byte)*param_9 + (byte)param_9;
      bVar50 = (byte)*param_9;
      param_9._0_1_ = (byte)param_6;
      param_9._1_1_ = param_6._1_1_;
      param_9._2_2_ = param_6._2_2_;
      in_EAX = puVar38;
      param_1 = param_8;
      puVar29 = param_6;
      puVar35 = param_4;
      puVar38 = param_3;
      puVar17 = puVar41;
      puVar36 = param_2;
      if (bVar51) goto code_r0x008f46bc;
      out((byte)*param_3,param_7._0_2_);
      pbVar37 = (byte *)((longlong)(int)param_6[0x1a] * 0x4d202d20);
      bVar47 = (longlong)(int)pbVar37 != (longlong)(int)param_6[0x1a] * 0x4d202d20;
code_r0x008f4663:
      out(*(undefined4 *)pbVar37,(short)param_2);
      bVar50 = (byte)in_EAX;
      if (bVar47) {
        uVar20 = *in_EAX;
        *(byte *)in_EAX = (byte)*in_EAX + bVar50;
        pbVar37 = pbVar37 + 5;
        bVar47 = pbVar37 == (byte *)0x0;
        if (!CARRY1((byte)uVar20,bVar50)) goto code_r0x008f46db;
        goto code_r0x008f473c;
      }
      *(byte *)((int)puVar29 + 0x6f) = *(byte *)((int)puVar29 + 0x6f) & (byte)param_2;
      *(byte *)in_EAX = (byte)*in_EAX + bVar50;
      pbVar30 = (byte *)((int)param_1 + 0x75);
      bVar10 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar50;
      if (CARRY1(bVar10,bVar50)) {
        pbVar37[0x76] = pbVar37[0x76] + bVar50;
        goto code_r0x008f46bf;
      }
      bVar47 = pbVar37 == (byte *)0xfffffffa;
      param_8._0_1_ = (char)puVar29;
      param_8._1_1_ = (undefined1)((uint)puVar29 >> 8);
      param_8._2_2_ = (undefined2)((uint)puVar29 >> 0x10);
      if ((longlong)(int)((longlong)*(int *)(pbVar37 + 0x74) * 0x687369) ==
          (longlong)*(int *)(pbVar37 + 0x74) * 0x687369) goto code_r0x008f46fb;
code_r0x008f475e:
      if (bVar47) {
        param_23._0_2_ = 0x612d;
        param_23._2_2_ = 0x7266;
        *(byte *)((int)param_2 + 0x72) = *(byte *)((int)param_2 + 0x72) & (byte)((uint)in_EAX >> 8);
        out(*(undefined1 *)(*(int *)((int)param_1 + 0x69) * 0x6e),(short)param_2);
        puVar17 = puVar41;
code_r0x008f47ea:
        puVar39 = (undefined1 *)segment(in_ES,(short)puVar17);
        uVar13 = in((short)param_2);
        *puVar39 = uVar13;
        param_2 = (uint *)CONCAT22(param_14._2_2_,CONCAT11(param_14._1_1_,(byte)param_14));
        puVar15 = (uint *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16));
        puVar41 = (uint *)((int)param_10 + 1);
        out((byte)*param_10,CONCAT11(param_14._1_1_,(byte)param_14));
        puVar29 = param_13;
        puVar35 = param_11;
code_r0x008f47ee:
        *(byte *)((int)puVar29 + -0x200f86) =
             *(byte *)((int)puVar29 + -0x200f86) + (char)((uint)puVar15 >> 8);
        puVar2 = (ushort *)(in_GS_OFFSET + (int)puVar15);
        uVar34 = (ushort)puVar35;
        sVar14 = (uVar34 & 3) - (*puVar2 & 3);
        *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
        goto code_r0x008f47f6;
      }
code_r0x008f47d4:
      out(*puStack_20,(short)uStack_10);
      pcVar18 = (char *)((int)User32Reserved + iStack_24 + 0x2e);
      *pcVar18 = *pcVar18 + (char)((uint)pcStack_8 >> 8);
      pbVar37 = (byte *)CONCAT22(unaff_retaddr_00,unaff_retaddr);
      puVar35 = (uint *)((uint)param_3 & 0xffff);
      in_EAX = (uint *)CONCAT22(param_8._2_2_,CONCAT11(param_8._1_1_,(char)param_8));
      param_2 = param_6;
      puVar17 = unaff_EBP;
      if (*pcVar18 != '\0') goto code_r0x008f47ea;
      *(byte *)in_EAX = (byte)*in_EAX + (char)param_8;
      puVar43 = param_6;
      puVar15 = unaff_EBP;
      if ((byte)*in_EAX != 0) {
        iVar44 = *(int *)pbVar37 * 0x72656d61;
        puVar35 = param_6;
        puVar43 = param_5;
        puVar41 = unaff_EBP;
        goto code_r0x008f4813;
      }
code_r0x008f4866:
      *(byte *)((int)puVar43 + 0x69) = *(byte *)((int)puVar43 + 0x69) & (byte)((uint)puVar43 >> 8);
      sVar14 = ((ushort)puVar35 & 3) - ((ushort)*puVar15 & 3);
      bVar47 = 0 < sVar14;
      *(ushort *)puVar15 = (short)*puVar15 + (ushort)bVar47 * sVar14;
      out(*pbVar37,(short)puVar43);
code_r0x008f48c6:
      out((byte)*param_25,param_29._0_2_);
      out(*(undefined1 *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16)),
          param_20._0_2_);
      puVar38 = param_22;
      puVar43 = param_21;
      puVar17 = param_20;
      param_11 = param_19;
      puVar29 = (uint *)CONCAT22(param_17._2_2_,param_17._0_2_);
      puVar35 = (uint *)CONCAT22(param_15._2_2_,CONCAT11(param_15._1_1_,(char)param_15));
      puVar15 = puVar36;
      if (bVar47) {
code_r0x008f48e2:
        *(byte *)param_30 = (byte)*param_30 + (char)param_30;
        puVar43 = param_27 + 0x1c;
        *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)param_28 >> 8);
        bVar49 = (byte)*puVar43 == 0;
        puVar38 = param_38;
        puVar43 = param_37;
        puVar17 = param_36;
        param_11 = param_35;
        puVar29 = param_33;
        puVar35 = param_32;
        puVar36 = puVar16;
code_r0x008f48eb:
        out((byte)*puVar35,(short)puVar17);
code_r0x008f48ec:
        if (!bVar49) {
          uVar20 = in((short)puVar17);
          *puVar36 = uVar20;
          puVar36 = puVar15;
          goto code_r0x008f48f6;
        }
        bVar50 = in((short)puVar17);
        *(byte *)puVar36 = bVar50;
        puVar35 = (uint *)((int)puVar36 + 1);
        puVar36 = puVar15;
      }
    }
code_r0x008f4954:
    param_12 = param_11;
    param_13 = puVar17;
    puVar40 = (undefined4 *)(param_12[0x1a] * 0x6c6f632d) + 1;
    out(*(undefined4 *)(param_12[0x1a] * 0x6c6f632d),(short)param_13);
    puVar15 = puVar35 + 1;
    uVar20 = in((short)param_13);
    *puVar35 = uVar20;
    bVar50 = (byte)puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar50;
    uVar20 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar50;
    if (CARRY1((byte)uVar20,bVar50)) {
      puVar41 = (uint *)CONCAT22(param_23._2_2_,(ushort)param_23);
      out(*(undefined1 *)CONCAT22(param_24._2_2_,(short)param_24),param_28._0_2_);
      in_EAX = param_30;
      puVar43 = param_27;
      uVar27 = param_28._0_2_;
code_r0x008f496f:
      bVar50 = in(uVar27);
      *(byte *)puVar41 = bVar50;
      *(byte *)(in_GS_OFFSET + (int)in_EAX) = *(byte *)(in_GS_OFFSET + (int)in_EAX) + (char)in_EAX;
      puVar43 = puVar43 + 0x1c;
      *(byte *)puVar43 = (byte)*puVar43 + (char)((ushort)uVar27 >> 8);
      bVar47 = (byte)*puVar43 == 0;
code_r0x008f4976:
      out((byte)*param_18,param_22._0_2_);
      out((byte)*param_26,uVar28);
      puVar43 = (uint *)((undefined1 *)(param_29[0x1a] * 0x6772612d) + 1);
      out(*(undefined1 *)(param_29[0x1a] * 0x6772612d),uVar28);
      if (bVar47) {
        puVar39 = (undefined1 *)segment(in_ES,(short)param_25);
        uVar13 = in(uVar28);
        *puVar39 = uVar13;
        param_12 = param_29;
code_r0x008f49fe:
        bVar47 = (longlong)(int)((longlong)(int)param_12[0x1a] * 0x67000000) !=
                 (longlong)(int)param_12[0x1a] * 0x67000000;
code_r0x008f4a05:
        if (!bVar47) {
code_r0x008f4a08:
          out((byte)*param_34,param_38._0_2_);
          puVar38 = (uint *)((int)param_40 + -0x73697773);
          *(byte *)puVar38 = *(byte *)puVar38 + (char)puVar38;
          pbVar37 = (byte *)((int)param_33 + 0x65);
          bVar50 = (byte)((uint)puVar38 >> 8);
          bVar47 = CARRY1(*pbVar37,bVar50);
          *pbVar37 = *pbVar37 + bVar50;
          goto joined_r0x008f4a14;
        }
        param_32._0_1_ = 0x2d;
        param_32._1_1_ = 99;
        param_32._2_2_ = 0x6e61;
code_r0x008f4a7a:
        out((byte)*param_33,param_37._0_2_);
        puVar2 = (ushort *)((int)param_39 + 0x2d);
        sVar14 = ((ushort)param_34 & 3) - (*puVar2 & 3);
        *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
        puVar38 = param_39;
        puVar41 = param_38;
        param_12 = param_36;
        puVar42 = param_34;
        sVar14 = CONCAT11(param_32._1_1_,(byte)param_32);
        uVar34 = param_32._2_2_;
        uVar28 = param_37._0_2_;
      }
      else {
code_r0x008f4993:
        out((byte)*puVar43,uVar28);
        bVar10 = (byte)param_40;
        *(byte *)param_40 = (byte)*param_40 + bVar10;
        pbVar37 = (byte *)((int)param_40 + 0x6f);
        bVar50 = *pbVar37;
        bVar9 = (byte)((uint)param_38 >> 8);
        *pbVar37 = *pbVar37 + bVar9;
        if (!CARRY1(bVar50,bVar9)) {
          bVar47 = false;
          if (*pbVar37 != 0) goto code_r0x008f4a05;
          uVar20 = in(param_38._0_2_);
          *param_33 = uVar20;
          goto code_r0x008f4a08;
        }
        *(byte *)param_40 = (byte)*param_40 + bVar10;
        bVar47 = CARRY1((byte)*param_40,bVar10);
        *(byte *)param_40 = (byte)*param_40 + bVar10;
        puVar38 = param_40;
joined_r0x008f4a14:
        if (bVar47) {
          param_15._2_2_ = 0x6c65;
          puVar41 = param_39;
          param_12 = param_37;
          puVar42 = param_35;
          sVar14 = (short)param_33;
          uVar34 = param_33._2_2_;
          uVar28 = param_38._0_2_;
        }
        else {
          puVar40 = (undefined4 *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16));
          out(*(undefined1 *)CONCAT22(param_17._2_2_,param_17._0_2_),param_21._0_2_);
          puVar38 = (uint *)(CONCAT22(param_23._2_2_,(ushort)param_23) + 0x9a878a94);
          uVar4 = in(param_21._0_2_);
          *puVar40 = uVar4;
          if (0x6578756b < CONCAT22(param_23._2_2_,(ushort)param_23)) {
            *(byte *)puVar38 = *(byte *)puVar38 + (char)puVar38;
            pbVar37 = (byte *)((int)puVar40 + 0x69);
            bVar50 = *pbVar37;
            bVar10 = (byte)((uint)puVar38 >> 8);
            *pbVar37 = *pbVar37 + bVar10;
            puVar41 = param_22;
            param_12 = param_20;
            puVar42 = param_18;
            puVar45 = puVar40 + 1;
            uVar28 = param_21._0_2_;
            if (!CARRY1(bVar50,bVar10)) goto code_r0x008f4a2c;
            goto code_r0x008f4a9b;
          }
          out((byte)*param_25,param_29._0_2_);
          *(byte *)puVar16 = (byte)*puVar16 + bVar12;
          out(*(byte *)((int)param_25 + 1),param_29._0_2_);
          puVar38 = puVar16;
          puVar41 = param_30;
          param_12 = param_28;
          puVar42 = param_26;
          sVar14 = (short)param_24;
          uVar34 = param_24._2_2_;
          uVar28 = param_29._0_2_;
        }
      }
      segment(in_DS,(short)param_12 + sVar14 + 0x6e);
      puVar39 = (undefined1 *)segment(in_ES,sVar14);
      uVar13 = in(uVar28);
      *puVar39 = uVar13;
      puVar45 = (uint *)CONCAT22(uVar34,sVar14 + 1);
code_r0x008f4a9b:
      cVar11 = (char)((uint)puVar38 >> 8);
      *(byte *)((int)puVar42 + 0x6e) = *(byte *)((int)puVar42 + 0x6e) + cVar11;
      sVar14 = (short)puVar45;
      puVar39 = (undefined1 *)segment(in_ES,sVar14);
      uVar13 = in(uVar28);
      *puVar39 = uVar13;
      *(byte *)((int)puVar42 + 0x6e) = *(byte *)((int)puVar42 + 0x6e) + cVar11;
      puVar39 = (undefined1 *)segment(in_ES,sVar14 + 1);
      uVar13 = in(uVar28);
      *puVar39 = uVar13;
      puVar43 = puVar41;
      puVar29 = puVar42;
      puVar35 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),sVar14 + 2);
      uVar27 = uVar28;
      goto code_r0x008f4aac;
    }
code_r0x008f49d6:
    uVar20 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + (byte)puVar38;
    uVar27 = SUB42(param_13,0);
    out(*(undefined1 *)puVar40,uVar27);
    pbVar37 = (byte *)((int)puVar40 + 5);
    out(*(undefined4 *)((int)puVar40 + 1),uVar27);
    bVar47 = true;
    if (CARRY1((byte)uVar20,(byte)puVar38)) {
code_r0x008f4a53:
      if (bVar47) {
        pbVar37 = (byte *)0x1;
        out(puRam00000000._0_1_,uVar27);
        puVar2 = (ushort *)((int)puVar38 + 0x2d);
        sVar14 = ((ushort)puVar29 & 3) - (*puVar2 & 3);
        bVar47 = 0 < sVar14;
        *puVar2 = *puVar2 + (ushort)bVar47 * sVar14;
        pbVar30 = (byte *)((int)puVar15 + 1);
        bVar50 = in(uVar27);
        *(byte *)puVar15 = bVar50;
        goto code_r0x008f4a64;
      }
      goto code_r0x008f4acc;
    }
    segment(in_GS,(short)param_12 + (short)puVar15 + 0x6e);
    bVar47 = false;
    if ((byte)*puVar38 == 0) {
      out(*pbVar37,uVar27);
code_r0x008f4a49:
      out((byte)*param_41,param_45._0_2_);
      pbVar37 = (byte *)((int)param_41 + 0x73);
      bVar50 = (byte)((uint)param_47 >> 8);
      bVar47 = CARRY1(*pbVar37,bVar50);
      *pbVar37 = *pbVar37 + bVar50;
      pbVar37 = (byte *)((int)param_41 + 2);
      out(*(byte *)((int)param_41 + 1),param_45._0_2_);
      puVar2 = (ushort *)((int)param_47 + 0x2d);
      sVar14 = ((byte)param_42 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
      puVar38 = param_47;
      puVar43 = param_46;
      param_12 = param_44;
      puVar29 = param_42;
      puVar15 = param_40;
      uVar27 = param_45._0_2_;
      goto code_r0x008f4a53;
    }
code_r0x008f49e7:
    pbVar30 = (byte *)((int)puVar15 + 1);
    uVar27 = SUB42(param_13,0);
    bVar50 = in(uVar27);
    *(byte *)puVar15 = bVar50;
    if ((longlong)(int)&param_33 != (longlong)*(int *)((int)puVar43 + 0x6e) * 0x6977732d) {
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
      *(byte *)((int)puVar43 + 0x72) = *(byte *)((int)puVar43 + 0x72) + (char)((uint)puVar43 >> 8);
      bVar50 = in(uVar27);
      *pbVar30 = bVar50;
      goto code_r0x008f49fe;
    }
code_r0x008f4a64:
    if (bVar47) {
      uVar4 = in(uVar27);
      *(undefined4 *)pbVar30 = uVar4;
      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
      pbVar37[0x72] = pbVar37[0x72] + (char)((uint)puVar38 >> 8);
      out(*pbVar37,uVar27);
      puVar2 = (ushort *)((int)puVar38 + 0x2d);
      sVar14 = ((ushort)puVar29 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
      puVar2 = (ushort *)((int)puVar43 + 0x6e);
      *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
      goto code_r0x008f4a7a;
    }
    iVar44 = CONCAT22(param_23._2_2_,(ushort)param_23);
    puVar38 = param_30;
    puVar43 = param_29;
    puVar29 = param_25;
    uVar27 = param_28._0_2_;
code_r0x008f4ae2:
    sVar14 = -((ushort)*puVar43 & 3);
    *(ushort *)puVar43 = (short)*puVar43 + (ushort)(0 < sVar14) * sVar14;
    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
    cVar11 = (char)((uint)puVar38 >> 8);
    *(byte *)((int)puVar29 + 0x6e) = *(byte *)((int)puVar29 + 0x6e) + cVar11;
    puVar39 = (undefined1 *)segment(in_ES,(short)iVar44);
    uVar13 = in(uVar27);
    *puVar39 = uVar13;
    *(byte *)((int)puVar29 + 0x6e) = *(byte *)((int)puVar29 + 0x6e) + cVar11;
    puVar39 = (undefined1 *)segment(in_ES,(short)iVar44 + 1);
    uVar13 = in(uVar27);
    *puVar39 = uVar13;
    uVar13 = in(param_28._0_2_);
    *(undefined1 *)CONCAT22(param_23._2_2_,(ushort)param_23) = uVar13;
    *(byte *)((int)param_25 + 0x6e) = *(byte *)((int)param_25 + 0x6e) + param_30._1_1_;
    puVar39 = (undefined1 *)segment(in_ES,(ushort)param_23 + 1);
    uVar13 = in(param_28._0_2_);
    *puVar39 = uVar13;
    uVar20 = param_27[0x1a];
    *(byte *)param_30 = (byte)*param_30 + (char)param_30;
    out(*(undefined1 *)(uVar20 * 0x7261632d),param_28._0_2_);
    puVar39 = (undefined1 *)segment(in_ES,(ushort)param_23 + 2);
    uVar13 = in(param_28._0_2_);
    *puVar39 = uVar13;
    *(byte *)((int)param_25 + 0x6e) = *(byte *)((int)param_25 + 0x6e) + param_30._1_1_;
    puVar39 = (undefined1 *)segment(in_ES,(ushort)param_23 + 3);
    uVar13 = in(param_28._0_2_);
    *puVar39 = uVar13;
    puVar39 = (undefined1 *)segment(in_ES,0);
    iVar44 = 1;
    uVar13 = in(param_28._0_2_);
    *puVar39 = uVar13;
    puVar35 = param_30;
    puVar43 = param_29;
    param_12 = param_27;
    puVar29 = param_25;
    uVar27 = param_28._0_2_;
code_r0x008f4b4b:
    param_7._2_2_ = (undefined2)((uint)puVar36 >> 0x10);
    pbVar37 = (byte *)((int)puVar29 + 0x6e);
    *pbVar37 = *pbVar37 + (char)((uint)puVar35 >> 8);
    bVar47 = *pbVar37 == 0;
    puVar39 = (undefined1 *)segment(in_ES,(short)iVar44);
    uVar13 = in(uVar27);
    *puVar39 = uVar13;
    puVar39 = (undefined1 *)((longlong)(int)param_12[0x1a] * 0x656d612d);
    if ((longlong)(int)puVar39 != (longlong)(int)param_12[0x1a] * 0x656d612d) {
      param_22._0_2_ = 0x69;
      param_22._2_1_ = 99;
      param_22._3_1_ = 0x68;
      param_21._0_2_ = 0x6300;
      param_21._2_2_ = 0x6e61;
      goto code_r0x008f4bd3;
    }
    puVar2 = (ushort *)((int)puVar43 + 0x6e);
    *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
    cVar11 = (char)puVar35;
    *(byte *)puVar35 = (byte)*puVar35 + cVar11;
    *(byte *)puVar35 = (byte)*puVar35 + cVar11;
    if ((byte)*puVar35 != 0) {
      out(*puVar39,uVar27);
      *(byte *)puVar35 = (byte)*puVar35 + cVar11;
      *(byte *)puVar35 = (byte)*puVar35 + cVar11;
      bVar47 = (byte)*puVar35 == 0;
      goto code_r0x008f4bd3;
    }
    puVar2 = (ushort *)((int)puVar35 + 0x2d);
    sVar14 = ((ushort)puVar29 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    segment(in_DS,(short)param_12 + (short)iVar44 + 0x6f);
    lVar5 = (longlong)*(int *)((int)puVar43 + (int)puVar29 * 2 + 0x6f) * 0x6c616e;
    puVar39 = (undefined1 *)lVar5;
    puVar2 = (ushort *)((int)puVar35 + -0x6461720b);
    sVar14 = ((ushort)puVar29 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    out(*puVar39,uVar27);
    if ((int)puVar39 == lVar5) {
      uRam00006e69 = in(param_6._2_2_);
      goto code_r0x008f4be9;
    }
    iVar44 = 0x6e69;
    puVar39 = (undefined1 *)CONCAT22(param_3._0_2_,unaff_retaddr_00);
    param_12 = (uint *)CONCAT13(param_6._1_1_,CONCAT12((byte)param_6,param_5._2_2_));
    puVar43 = (uint *)CONCAT13(param_8._1_1_,CONCAT12((char)param_8,param_7._2_2_));
    puVar38 = (uint *)CONCAT13(param_9._1_1_,CONCAT12((byte)param_9,param_8._2_2_));
    bVar50 = (byte)param_8._2_2_;
    if (SBORROW4((int)(puVar35 + -0x19185c9d),0x676e6973)) {
      *(byte *)puVar38 = (byte)*puVar38 + bVar50;
    }
    else {
      if ((uint *)0x676e6972 < puVar35 + -0x19185c9d) {
        *(byte *)puVar38 = (byte)*puVar38 + bVar50;
        *(byte *)(param_12 + 0x1a) = (byte)param_12[0x1a] + (char)((ushort)param_8._2_2_ >> 8);
        puVar36 = puVar38 + -0x80400;
        bVar47 = CARRY1((byte)*puVar36,bVar50);
        *(byte *)puVar36 = (byte)*puVar36 + bVar50;
        puVar2 = (ushort *)((int)puVar38 + 0x69);
        *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
        uVar27 = param_6._2_2_;
        goto code_r0x008f4baf;
      }
      out(*puVar39,param_6._2_2_);
      puVar3 = (undefined1 *)segment(in_ES,0x6e69);
      uVar13 = in(param_6._2_2_);
      *puVar3 = uVar13;
    }
code_r0x008f4bf5:
    puVar2 = (ushort *)((int)puVar43 + 0x6e);
    sVar14 = ((short)&param_17 + 2U & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    uVar4 = in(CONCAT11(param_22._3_1_,param_22._2_1_));
    *(undefined4 *)CONCAT22(param_18._0_2_,param_17._2_2_) = uVar4;
    puVar2 = (ushort *)(CONCAT22((short)param_24,param_23._2_2_) + 0x6e);
    *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
    pbVar37 = (byte *)(CONCAT22(param_20._0_2_,param_19._2_2_) + 0x6e);
    *pbVar37 = *pbVar37 & (byte)(param_24._2_2_ >> 8);
    puVar3 = (undefined1 *)segment(in_ES,param_17._2_2_ + 4);
    uVar13 = in(CONCAT11(param_22._3_1_,param_22._2_1_));
    *puVar3 = uVar13;
s_american_008f4c18:
    uVar4 = in(param_28._0_2_);
    *(undefined4 *)CONCAT22(param_23._2_2_,(ushort)param_23) = uVar4;
    puVar2 = (ushort *)((int)param_29 + 0x6e);
    *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
    *(byte *)param_30 = (byte)*param_30 + (char)param_30;
    *(byte *)param_30 = (byte)*param_30 + (char)param_30;
    *(byte *)((int)param_29 + 0x43) = *(byte *)((int)param_29 + 0x43) + (char)param_30;
    *(byte *)param_30 = (byte)*param_30 + (char)param_30;
    *(byte *)param_30 = (byte)*param_30 + (char)param_30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    puVar29 = (uint *)((int)unaff_EBX + 1);
    pcStack_8 = (char *)0x656c69;
    uVar20 = *in_EAX;
    *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
    puVar35 = (uint *)((int)unaff_EBP + 1);
    puVar2 = (ushort *)((int)unaff_EBP + 0x62);
    sVar14 = ((ushort)unaff_ESI & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    uVar26 = SUB42(param_2,0);
    out(*unaff_ESI,uVar26);
    if (CARRY1((byte)uVar20,(byte)in_EAX)) goto code_r0x008f463a;
    puVar41 = (uint *)((int)unaff_ESI + 5);
    out(*(undefined1 *)(unaff_ESI + 1),uVar26);
    if (param_1 == (uint *)0xffffffff) {
      param_1 = (uint *)0x0;
      goto code_r0x008f46b7;
    }
    out(*(byte *)puVar41,uVar26);
    bVar9 = (byte)param_7;
    *(byte *)param_7 = (byte)*param_7 + bVar9;
    pbVar37 = (byte *)((int)param_7 + 0x65);
    bVar10 = *pbVar37;
    *pbVar37 = *pbVar37 + (byte)param_5;
    puVar35 = param_7;
    puVar29 = param_5;
    puVar41 = param_4;
    puVar42 = unaff_EBP;
    param_2 = param_7;
    if (CARRY1(bVar10,(byte)param_5)) goto code_r0x008f464d;
    *(byte *)param_7 = (byte)*param_7 + bVar9;
    *(byte *)param_7 = (byte)*param_7 + bVar9;
    out(*unaff_EBP,uVar27);
    uRam00656c69 = in(uVar27);
    puVar36 = unaff_EBP + 2;
    out(unaff_EBP[1],uVar27);
    puVar41 = (uint *)0x656c6e;
    uRam00656c6a = in(uVar27);
    *(byte *)param_7 = (byte)*param_7 + bVar9;
    bVar47 = CARRY1((byte)*param_7,bVar9);
    *(byte *)param_7 = (byte)*param_7 + bVar9;
    pbVar37 = (byte *)((int)unaff_EBP + 9);
    out((byte)*puVar36,uVar27);
    in_EAX = param_7;
    param_1 = param_6;
    param_2 = param_5;
    puVar29 = (uint *)((int)param_4 + 1);
    puVar35 = (uint *)CONCAT22(unaff_retaddr_00,unaff_retaddr);
    if ((POPCOUNT((byte)*param_7) & 1U) == 0) goto code_r0x008f4663;
    uRam00656c6e = in(uVar27);
    *param_14 = *param_14 + (byte)param_14;
    pbVar37 = (byte *)((int)unaff_EBP + (int)param_9 * 2 + 0x75);
    *pbVar37 = *pbVar37 + (byte)param_14;
    lVar5 = (longlong)*(int *)((int)param_8 + 0x69) * 0x206e6163;
    param_14._0_1_ = (byte)param_12;
    param_14._1_1_ = (char)((uint)param_12 >> 8);
    param_14._2_2_ = (undefined2)((uint)param_12 >> 0x10);
    if ((int)lVar5 == lVar5) {
      *pcVar18 = *pcVar18 + bVar50;
      param_13 = param_11;
      out(*param_8,(short)param_12);
      bVar47 = false;
      if (*pcVar18 == '\0') {
        param_12 = (uint *)0x72664120;
        param_2 = puRam00000010;
        unaff_ESI = puRam00000000;
        pcRamfffffffc = pcVar18;
        goto code_r0x008f461a;
      }
    }
    else {
      bVar47 = *pbVar37 == 0;
      puVar39 = (undefined1 *)segment(in_ES,(short)puVar36);
      uVar13 = in((short)param_12);
      *puVar39 = uVar13;
    }
    pcStack_8 = (char *)0x656c69;
    if (!bVar47) {
      puVar33 = (undefined4 *)(*puVar17 * 0x6d726547);
      unaff_EDI = (uint *)*puVar33;
      unaff_ESI = (undefined4 *)puVar33[1];
      param_2 = (uint *)puVar33[5];
      in_EAX = (uint *)puVar33[7];
      goto code_r0x008f4691;
    }
code_r0x008f46fb:
    puVar17 = (uint *)CONCAT22(param_8._2_2_,CONCAT11(param_8._1_1_,(char)param_8));
    param_1 = (uint *)CONCAT22(param_14._2_2_,CONCAT11(param_14._1_1_,(byte)param_14));
    out(*(undefined1 *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9)),(short)param_13
       );
    puVar39 = (undefined1 *)((longlong)(int)param_12[0x1a] * 0x54202d20);
    in_EAX = param_15;
    param_2 = param_13;
    puVar29 = param_12;
    puVar35 = param_10;
    if ((longlong)(int)puVar39 == (longlong)(int)param_12[0x1a] * 0x54202d20) goto code_r0x008f470d;
    if (!bVar47) {
      out(*puVar39,(short)param_13);
      *(byte *)param_15 = (byte)*param_15 + (char)param_15;
      *(byte *)((int)param_10 + 0x6e) = *(byte *)((int)param_10 + 0x6e) + param_15._1_1_;
      goto code_r0x008f47ea;
    }
    param_8._0_1_ = ' ';
    param_8._1_1_ = 0x6b;
    param_8._2_2_ = 0x726f;
    puVar41 = (uint *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9));
    pbVar37 = (byte *)((int)param_12 + 0x6f);
    *pbVar37 = *pbVar37 + (char)((uint)param_13 >> 8);
    if (*pbVar37 == 0) {
      param_15._0_1_ = ' ';
      param_15._1_1_ = 0x61;
      param_15._2_2_ = 0x7266;
    }
    else {
      puVar2 = (ushort *)((int)param_13 + 0x65);
      *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
      sVar14 = ((byte)param_10 & 3) - ((ushort)*param_15 & 3);
      *(ushort *)param_15 = (short)*param_15 + (ushort)(0 < sVar14) * sVar14;
    }
code_r0x008f47f6:
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
    puVar2 = (ushort *)((int)puVar15 + 0x69);
    sVar14 = (uVar34 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    out((byte)*puVar41,(short)param_2);
    puVar2 = (ushort *)CONCAT22(param_23._2_2_,(ushort)param_23);
    *(byte *)param_24 = (byte)*param_24 + (char)param_24;
    *(byte *)((int)param_22 + 0x72) = *(byte *)((int)param_22 + 0x72) + (char)((uint)param_24 >> 8);
    lVar5 = (longlong)*(int *)((int)puVar2 + 0x69) * 0x6d61006e;
    bVar51 = (int)lVar5 != lVar5;
    if (!bVar51) {
      bVar49 = 0 < (short)-(*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)bVar49 * -(*puVar2 & 3);
      bVar47 = bVar51;
      goto code_r0x008f4810;
    }
    uVar4 = in(param_22._0_2_);
    *(undefined4 *)CONCAT22(param_17._2_2_,param_17._0_2_) = uVar4;
code_r0x008f48f6:
    uVar13 = in(uStack_30);
    *puStack_44 = uVar13;
    *pcStack_8 = *pcStack_8 + (char)pcStack_8;
    pcVar18 = (char *)(iStack_14 + 0x70);
    *pcVar18 = *pcVar18 + (char)((uint)uStack_10 >> 8);
    bVar51 = *pcVar18 == '\0';
    pbVar37 = (byte *)CONCAT22(unaff_retaddr_00,unaff_retaddr);
    in_EAX = (uint *)CONCAT22(param_8._2_2_,CONCAT11(param_8._1_1_,(char)param_8));
    puVar43 = param_5;
    puVar41 = unaff_EBP;
    uVar27 = (short)param_6;
code_r0x008f48ff:
    out(*pbVar37,uVar27);
    puVar40 = (undefined4 *)((longlong)(int)puVar43[0x1a] * 0x206c652d);
    bVar47 = (longlong)(int)puVar40 != (longlong)(int)puVar43[0x1a] * 0x206c652d;
    if (!bVar47) {
      param_8._0_1_ = '-';
      param_8._1_1_ = 99;
      param_8._2_2_ = 0x6968;
      goto code_r0x008f496f;
    }
    bVar50 = in(uVar27);
    *(byte *)puVar41 = bVar50;
    if (bVar47 || bVar51) {
      param_8._0_1_ = 'i';
      param_8._1_1_ = 0x6c;
      param_8._2_2_ = 0x65;
      uVar20 = *in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
      bVar47 = (byte)*in_EAX == 0;
      if (!CARRY1((byte)uVar20,(byte)in_EAX)) {
        puVar15 = (uint *)0x656c69;
        pbVar37 = (byte *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9));
        puVar43 = (uint *)CONCAT22(param_14._2_2_,CONCAT11(param_14._1_1_,(byte)param_14));
        puVar38 = (uint *)CONCAT22(param_15._2_2_,CONCAT11(param_15._1_1_,(char)param_15));
        puVar29 = param_10;
        goto code_r0x008f49e7;
      }
    }
    else {
      out(*puVar40,uVar27);
      if (bVar47) goto code_r0x008f4912;
      param_13 = param_13 + 0x1c;
      *(byte *)param_13 = (byte)*param_13 + param_14._1_1_;
      bVar47 = (byte)*param_13 == 0;
    }
    goto code_r0x008f4976;
  }
  *(byte *)((int)in_EAX + 0x61) = *(byte *)((int)in_EAX + 0x61) + (char)param_2;
code_r0x008f461a:
  out(*(undefined1 *)unaff_ESI,(short)param_2);
  uVar4 = in((short)((uint)param_5 >> 8));
  *(undefined4 *)CONCAT13(uStack_4,pcStack_8._1_3_) = uVar4;
  puVar17 = (uint *)CONCAT13((byte)param_9,(int3)((uint)param_8 >> 8));
  unaff_ESI = (undefined4 *)CONCAT13((byte)param_10,(int3)((uint)param_9 >> 8));
  puVar35 = (uint *)CONCAT13(param_11._0_1_,(int3)((uint)param_10 >> 8));
  unaff_EBX = (uint *)CONCAT13(param_13._0_1_,param_12._1_3_);
  param_2 = (uint *)CONCAT13((byte)param_14,param_13._1_3_);
  param_1 = (uint *)CONCAT13((char)param_15,CONCAT21(param_14._2_2_,param_14._1_1_));
  in_EAX = (uint *)CONCAT13((byte)param_16,(int3)((uint)param_15 >> 8));
  bVar47 = CARRY1((byte)*in_EAX,param_15._1_1_);
  *(byte *)in_EAX = (byte)*in_EAX + param_15._1_1_;
  if (&stack0x00000000 == (undefined1 *)0xffffffc8) {
    unaff_EDI = puVar17 + 1;
    uVar20 = in((short)((uint)param_13 >> 8));
    *puVar17 = uVar20;
    goto s_rg_008f4620_8;
  }
  pbVar37 = (byte *)((int)puVar35 + 0x65);
  *pbVar37 = *pbVar37 + param_14._1_1_;
  bVar50 = (byte)((uint)param_13 >> 8);
  if (-1 < (char)*pbVar37) {
    sVar14 = ((ushort)((uint)param_10 >> 8) & 3) - ((ushort)*puVar17 & 3);
    *(ushort *)puVar17 = (short)*puVar17 + (ushort)(0 < sVar14) * sVar14;
    puVar35 = unaff_EBX + 0x1c;
    *(byte *)puVar35 = (byte)*puVar35 + bVar50;
    bVar47 = (byte)*puVar35 == 0;
    in_EAX = param_23;
    param_1 = param_22;
    param_2 = param_21;
    puVar29 = param_20;
    puVar35 = param_18;
    puVar17 = param_16;
    goto code_r0x008f46a7;
  }
  pbVar37 = (byte *)((int)param_2 + (int)unaff_ESI * 2 + 0x61);
  *pbVar37 = *pbVar37 & bVar50;
  puVar29 = unaff_EBX;
code_r0x008f470d:
  lVar5 = (longlong)*(int *)((int)User32Reserved + (int)((int)param_1 + (int)puVar35 * 2 + 0x2b)) *
          0x206c616e;
  puVar40 = (undefined4 *)lVar5;
  param_15._0_1_ = (char)puVar29;
  param_15._1_1_ = (byte)((uint)puVar29 >> 8);
  param_15._2_2_ = (undefined2)((uint)puVar29 >> 0x10);
  puVar41 = puVar40 + 1;
  uVar27 = SUB42(param_2,0);
  out(*puVar40,uVar27);
  if ((int)puVar40 == lVar5) {
    *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
    bVar47 = (byte)*in_EAX == 0;
code_r0x008f471c:
    if (bVar47) {
      puVar38 = (uint *)(puVar35[0x19] * 0x6174732d);
      bVar47 = true;
      goto code_r0x008f4726;
    }
    uVar27 = CONCAT11(param_14._1_1_,(byte)param_14);
    puVar41 = param_10;
  }
  else {
    *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
  }
code_r0x008f478d:
  out(*puVar41,uVar27);
  cRam909c9700 = cRam909c9700 + (char)((ushort)uVar27 >> 8);
  puVar41 = puVar36;
code_r0x008f479e:
  pbVar37 = (byte *)CONCAT22(param_8._2_2_,CONCAT11(param_8._1_1_,(char)param_8));
  uVar27 = SUB42(param_12,0);
  bVar50 = (byte)((uint)param_13 >> 8);
  in_EAX = (uint *)CONCAT22(param_14._2_2_,CONCAT11(param_14._1_1_,(byte)param_14));
  *(byte *)in_EAX = (byte)*in_EAX + (byte)param_14;
  bVar47 = CARRY1((byte)*in_EAX,(byte)param_14);
  uVar20 = *in_EAX;
  *(byte *)in_EAX = (byte)*in_EAX + (byte)param_14;
  bVar10 = (byte)*in_EAX;
  param_2 = param_12;
  puVar29 = param_11;
  puVar36 = puVar41;
  if (SCARRY1((byte)uVar20,(byte)param_14)) {
code_r0x008f481c:
    bVar51 = bVar10 == 0;
    if (!bVar47) goto code_r0x008f48ff;
    lVar5 = (longlong)*(int *)((int)puVar43 + 0x73) * 0x73000000;
    pbVar37 = (byte *)lVar5;
    if ((int)pbVar37 != lVar5 || bVar51) goto code_r0x008f482f;
    bVar50 = (byte)in_EAX;
    *(byte *)in_EAX = (byte)*in_EAX + bVar50;
    uVar20 = *in_EAX;
    *(byte *)in_EAX = (byte)*in_EAX + bVar50;
    bVar51 = (byte)*in_EAX == 0;
    if (!CARRY1((byte)uVar20,bVar50)) {
      param_8._0_1_ = '-';
      param_8._1_1_ = 0x65;
      param_8._2_2_ = 0x206c;
      goto code_r0x008f48ff;
    }
    out((byte)*param_10,CONCAT11(param_14._1_1_,(byte)param_14));
    uVar4 = in(param_22._0_2_);
    *(undefined4 *)CONCAT22(param_17._2_2_,param_17._0_2_) = uVar4;
    pbVar37 = (byte *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16));
    bVar50 = *pbVar37;
    *pbVar37 = *pbVar37 + (byte)param_16;
    if (CARRY1(bVar50,(byte)param_16)) {
      out((byte)*param_18,param_22._0_2_);
      if ((longlong)(int)((longlong)(int)param_21[0x1a] * 0x63696e2d) ==
          (longlong)(int)param_21[0x1a] * 0x63696e2d) {
        if (*pbVar37 == 0) {
          *(byte *)param_32 = (byte)*param_32 + (byte)param_32;
          *(byte *)(param_29 + 0x1c) = (byte)param_29[0x1c] + param_30._1_1_;
          puVar35 = (uint *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9));
          puVar15 = param_40;
          puVar43 = param_39;
          puVar38 = param_38;
          puVar17 = param_37;
          puVar29 = param_35;
          puVar41 = param_34;
          goto code_r0x008f48b7;
        }
      }
      else {
        *(byte *)(param_29 + 0x1c) = (byte)param_29[0x1c] + param_30._1_1_;
      }
    }
code_r0x008f4912:
    out((byte)*param_10,CONCAT11(param_14._1_1_,(byte)param_14));
    puVar42 = param_18 + 1;
    out(*param_18,param_22._0_2_);
    uVar27 = param_22._0_2_;
    if ((longlong)(int)((longlong)(int)param_13[0x1a] * 0x7563652d) !=
        (longlong)(int)param_13[0x1a] * 0x7563652d) {
      out((byte)*param_26,uVar28);
      puVar42 = (uint *)(param_29[0x1a] * 0x6d6f642d);
      lVar5 = (longlong)*(int *)((int)puVar42 + 0x69) * 0x206e6163;
      puVar29 = (uint *)lVar5;
      bVar47 = (int)puVar29 != lVar5;
      puVar15 = param_32;
      puVar43 = puVar16;
      puVar38 = param_30;
      puVar17 = param_29;
      puVar35 = param_33;
      uVar27 = uVar28;
      if (!bVar47) {
code_r0x008f4934:
        puVar41 = puVar42;
        uVar27 = (short)puVar38;
        if (!bVar47) goto code_r0x008f4936;
        goto code_r0x008f49ab;
      }
    }
    uVar28 = uVar27;
    puVar43 = puVar42 + 1;
    out(*puVar42,uVar28);
    goto code_r0x008f4993;
  }
code_r0x008f47aa:
  *(byte *)(puVar29 + 0x1a) = (byte)puVar29[0x1a] & (byte)((uint)in_EAX >> 8);
  uVar27 = SUB42(param_2,0);
  out(*pbVar37,uVar27);
  pbVar30 = pbVar37 + 0x66;
  bVar10 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar50;
  if (!CARRY1(bVar10,bVar50) && *pbVar30 != 0) {
    out(pbVar37[1],uVar27);
    puVar17 = puVar41;
    goto code_r0x008f47ea;
  }
  if ((POPCOUNT(*pbVar30) & 1U) != 0) {
    uVar13 = in(CONCAT11(param_14._1_1_,(byte)param_14));
    *(undefined1 *)CONCAT22(param_9._2_2_,CONCAT11(param_9._1_1_,(byte)param_9)) = uVar13;
    puVar39 = (undefined1 *)CONCAT22(param_17._2_2_,param_17._0_2_);
    bVar50 = (byte)((uint)param_23 >> 8);
    out((byte)*param_18,param_22._0_2_);
    pbVar37 = (byte *)((int)User32Reserved + (int)((int)param_24 + 0x2b));
    *pbVar37 = *pbVar37 + bVar50;
    out(*(byte *)((int)param_18 + 1),param_22._0_2_);
    puVar35 = param_24;
    uVar27 = param_22._0_2_;
code_r0x008f47cd:
    pbVar37 = (byte *)((int)puVar35 + -0x676e6f6b);
    *pbVar37 = *pbVar37 + (char)pbVar37;
    *(byte *)(puVar35 + -0x19db9bbf) = (byte)puVar35[-0x19db9bbf] + bVar50;
    uVar13 = in(uVar27);
    *puVar39 = uVar13;
    uVar13 = in(uVar27);
    puVar39[1] = uVar13;
    goto code_r0x008f47d4;
  }
  *(byte *)((int)puVar29 + 0x77) = *(byte *)((int)puVar29 + 0x77) + (char)((uint)param_2 >> 8);
code_r0x008f482f:
  bVar50 = in(uVar27);
  *(byte *)puVar41 = bVar50;
  out((byte)*param_10,CONCAT11(param_14._1_1_,(byte)param_14));
  puVar42 = param_13 + -0x803e4;
  *(byte *)puVar42 = (byte)*puVar42 + param_14._1_1_;
  puVar35 = (uint *)CONCAT22(param_17._2_2_,param_17._0_2_);
  out((byte)*param_18,param_22._0_2_);
  puVar15 = param_24;
  puVar43 = (uint *)CONCAT22(param_23._2_2_,(ushort)param_23);
  puVar38 = param_22;
  puVar17 = param_21;
  puVar29 = param_19;
  puVar41 = (uint *)(param_21[0x1a] * 0x6e65762d);
  if ((POPCOUNT((byte)*puVar42) & 1U) != 0) {
    bVar50 = in(param_22._0_2_);
    *(byte *)puVar35 = bVar50;
    pcVar18 = (char *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16));
    *pcVar18 = *pcVar18 + (byte)param_16;
    puVar43 = param_13 + 0x1c;
    *(byte *)puVar43 = (byte)*puVar43 + param_14._1_1_;
    bVar47 = (byte)*puVar43 == 0;
    puVar35 = (uint *)CONCAT22(param_17._2_2_,param_17._0_2_);
    out((byte)*param_18,param_22._0_2_);
    puVar41 = (uint *)((longlong)(int)param_21[0x1a] * 0x7572752d);
    puVar43 = (uint *)CONCAT22(param_23._2_2_,(ushort)param_23);
    if (!bVar47) goto code_r0x008f48b7;
    if ((longlong)(int)puVar41 == (longlong)(int)param_21[0x1a] * 0x7572752d) {
      param_24._0_2_ = 0x6d2d;
      param_24._2_2_ = 0x7865;
      goto code_r0x008f48c6;
    }
    out((byte)*param_26,uVar28);
    puVar40 = (undefined4 *)((longlong)(int)param_29[0x1a] * 0x6575702d);
    if ((longlong)(int)puVar40 == (longlong)(int)param_29[0x1a] * 0x6575702d) {
      pbVar37 = (byte *)(puVar40 + 1);
      out(*puVar40,uVar28);
      puVar43 = param_30;
      puVar35 = param_27;
      goto code_r0x008f4866;
    }
    puVar38 = param_32 + -0x191b9bda;
    puVar43 = puVar16;
    puVar17 = param_30;
    param_11 = param_29;
    puVar29 = param_27;
    puVar35 = param_24;
    puVar15 = puVar36;
    if (puVar38 == (uint *)0x0) goto code_r0x008f48e2;
    goto code_r0x008f4954;
  }
code_r0x008f48b7:
  out((byte)*puVar41,(short)puVar38);
  puVar41 = (uint *)((longlong)(int)puVar17[0x1a] * 0x646f6d2d);
  if ((longlong)(int)puVar41 != (longlong)(int)puVar17[0x1a] * 0x646f6d2d) {
    puVar42 = (uint *)((int)puVar41 + 1);
    out((byte)*puVar41,(short)puVar38);
    bVar47 = false;
    *(byte *)((int)puVar38 + 0x65) = *(byte *)((int)puVar38 + 0x65) & (byte)((uint)puVar38 >> 8);
    goto code_r0x008f4934;
  }
  uVar20 = *puVar15;
  *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
  bVar47 = (byte)*puVar15 == 0;
  puVar42 = puVar41;
  if (CARRY1((byte)uVar20,(byte)puVar15)) goto code_r0x008f48c6;
code_r0x008f4936:
  uVar27 = SUB42(puVar38,0);
  uVar20 = *puVar15;
  *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
  uVar19 = *puVar15;
  if (CARRY1((byte)uVar20,(byte)puVar15)) {
    out((byte)*param_25,param_29._0_2_);
    puVar15 = param_39;
    puVar43 = param_38;
    puVar17 = param_36;
    puVar29 = param_34;
    puVar41 = param_33;
    puVar35 = param_32;
    uVar27 = param_37._0_2_;
    if ((byte)uVar19 != 0) {
      *(byte *)((int)param_29 + 0x69) =
           *(byte *)((int)param_29 + 0x69) & (byte)((uint)param_29 >> 8);
      param_13 = param_30;
      param_12 = param_29;
      param_11 = param_28;
      goto code_r0x008f494c;
    }
code_r0x008f49ab:
    puVar42 = (uint *)((int)puVar41 + 1);
    out((byte)*puVar41,uVar27);
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
  }
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
  out((byte)*puVar42,uVar27);
  out(*(undefined4 *)((int)puVar42 + 1),uVar27);
  puVar15 = (uint *)((int)puVar15 + -0x7a617262);
  iVar44 = *(int *)((int)puVar43 + (int)puVar29 * 2 + 0x61);
  puVar38 = puVar42 + 0x1d;
  uVar20 = *puVar38;
  bVar50 = (byte)((uint)puVar43 >> 8);
  *(byte *)puVar38 = (byte)*puVar38 + bVar50;
  bVar47 = (byte)*puVar38 == 0;
  if (CARRY1((byte)uVar20,bVar50)) {
    uVar20 = in(uVar27);
    *puVar35 = uVar20;
code_r0x008f4a2c:
    puVar35 = (uint *)CONCAT22(param_24._2_2_,(short)param_24);
    pbVar37 = (byte *)((int)param_25 + 1);
    out((byte)*param_25,param_29._0_2_);
    bVar51 = puVar16 < (uint *)0x6863696c;
    puVar15 = puVar16 + -0x1a18da5b;
    bVar47 = puVar15 == (uint *)0x0;
    puVar43 = param_30;
    puVar17 = param_28;
    puVar29 = param_26;
    uVar27 = param_29._0_2_;
code_r0x008f4a33:
    puVar38 = param_39;
    puVar41 = param_38;
    param_12 = param_36;
    puVar42 = param_34;
    puVar45 = param_32;
    uVar28 = param_37._0_2_;
    if (!bVar47) {
      out(*pbVar37,uVar27);
      puVar38 = puVar15;
      param_12 = puVar17;
      if (bVar51) goto code_r0x008f4a38;
      goto code_r0x008f4aac;
    }
    goto code_r0x008f4a9b;
  }
  piVar1 = (int *)segment(in_GS,(short)puVar17 + (short)puVar35 + 0x6e);
  pbVar37 = (byte *)((int)puVar42 + 9);
  out(*(undefined4 *)((int)puVar42 + 5),uVar27);
  bVar51 = true;
  puVar29 = (uint *)(iVar44 * 0x6e);
  if ((longlong)(int)&param_32 != (longlong)*piVar1 * 0x6e796e2d) goto code_r0x008f4a33;
  puVar42 = puVar42 + 0x1e;
  uVar20 = *puVar42;
  *(byte *)puVar42 = (byte)*puVar42 + bVar50;
  if (!CARRY1((byte)uVar20,bVar50)) {
    segment(in_GS,(short)puVar17 + (short)puVar35 + 0x6e);
    uVar20 = in(uVar27);
    *puVar35 = uVar20;
    puVar39 = (undefined1 *)CONCAT22(param_15._2_2_,CONCAT11(param_15._1_1_,(char)param_15));
    puVar40 = (undefined4 *)CONCAT22(param_16._2_2_,CONCAT11(param_16._1_1_,(byte)param_16));
    puVar29 = (uint *)CONCAT22(param_17._2_2_,param_17._0_2_);
    puVar15 = (uint *)(puVar39 + 1);
    uVar13 = in(param_20._0_2_);
    *puVar39 = uVar13;
    *(byte *)param_22 = (byte)*param_22 + (char)param_22;
    puVar38 = param_22;
    puVar43 = param_21;
    param_13 = param_20;
    param_12 = param_19;
    goto code_r0x008f49d6;
  }
  uVar20 = in(uVar27);
  *puVar35 = uVar20;
code_r0x008f4a38:
  out((byte)*param_33,param_37._0_2_);
  puVar38 = (uint *)((int)param_39 + -0x74737561);
  if ((uint *)0x74737560 < param_39) goto code_r0x008f4a49;
  *(byte *)puVar38 = *(byte *)puVar38 + (char)puVar38;
  out(*(byte *)((int)param_33 + 1),param_37._0_2_);
  puVar43 = param_38;
  param_12 = param_36;
  puVar29 = param_34;
  puVar35 = param_32;
  uVar27 = param_37._0_2_;
code_r0x008f4aac:
  *(byte *)((int)puVar29 + 0x6e) = *(byte *)((int)puVar29 + 0x6e) + (char)((uint)puVar38 >> 8);
  puVar39 = (undefined1 *)segment(in_ES,(short)puVar35);
  puVar15 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),(short)puVar35 + 1);
  uVar13 = in(uVar27);
  *puVar39 = uVar13;
  puVar39 = (undefined1 *)(param_12[0x1a] * 0x6972742d);
  out(*puVar39,uVar27);
  pbVar37 = puVar39 + 5;
  out(*(undefined4 *)(puVar39 + 1),uVar27);
code_r0x008f4acc:
  out(*(undefined4 *)pbVar37,uVar27);
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
  pbVar37 = (byte *)((int)puVar29 + 0x6e);
  bVar10 = (byte)((uint)puVar38 >> 8);
  *pbVar37 = *pbVar37 + bVar10;
  bVar50 = *pbVar37;
  puVar39 = (undefined1 *)segment(in_ES,(short)puVar15);
  iVar44 = CONCAT22((short)((uint)puVar15 >> 0x10),(short)puVar15 + 1);
  uVar13 = in(uVar27);
  *puVar39 = uVar13;
  puVar39 = (undefined1 *)((longlong)(int)param_12[0x1a] * 0x756f732d);
  if (bVar50 != 0) {
    *(byte *)((int)puVar43 + 0x66) = *(byte *)((int)puVar43 + 0x66) & bVar10;
    goto code_r0x008f4ae2;
  }
  bVar47 = false;
  if ((longlong)(int)puVar39 != (longlong)(int)param_12[0x1a] * 0x756f732d) {
    puVar35 = (uint *)((int)puVar38 + -0x737561);
    out(*puVar39,uVar27);
    goto code_r0x008f4b4b;
  }
code_r0x008f4baf:
  out(*puVar39,uVar27);
  if (!bVar47) goto s_american_008f4c18;
  puVar36 = puVar38 + -0x19db9bda;
  uVar4 = *(undefined4 *)(iVar44 + 0x6e);
  bVar50 = (byte)puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + bVar50;
  uVar20 = *puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + bVar50;
  puVar2 = (ushort *)((int)puVar38 + -0x676e6eff);
  sVar14 = ((short)uVar4 * 0x67 & 3U) - (*puVar2 & 3);
  *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
  out(puVar39[1],uVar27);
  if (!CARRY1((byte)uVar20,bVar50)) {
    *(byte *)puVar36 = (byte)*puVar36 + bVar50;
    *(byte *)puVar36 = (byte)*puVar36 + bVar50;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_12 + 0x1a) = (byte)param_12[0x1a] + (char)((uint)puVar36 >> 8);
  puVar2 = (ushort *)((int)puVar43 + 0x6e);
  bVar47 = 0 < (short)-(*puVar2 & 3);
  *puVar2 = *puVar2 + (ushort)bVar47 * -(*puVar2 & 3);
code_r0x008f4bd3:
  segment(in_DS,(short)param_27 + (ushort)param_23 + 0x6e);
  if (bVar47) {
    pbVar37 = (byte *)CONCAT22(param_17._0_2_,param_16._2_2_);
  }
  else {
code_r0x008f4be9:
    puVar43 = (uint *)CONCAT13(param_16._1_1_,CONCAT12((byte)param_16,param_15._2_2_));
    pbVar37 = (byte *)CONCAT22(param_17._0_2_,param_16._2_2_);
    uVar13 = in(param_14._2_2_);
    *(undefined1 *)CONCAT13(param_10._1_1_,CONCAT12((byte)param_10,param_9._2_2_)) = uVar13;
    if ((longlong)((int)&param_17 + 2) == (longlong)*(int *)((int)puVar43 + 0x6e) * 0x6d610000)
    goto code_r0x008f4bf5;
  }
  bVar50 = *pbVar37;
  *pbVar37 = *pbVar37 + (byte)pbVar37;
  puVar40 = (undefined4 *)CONCAT22(param_18._0_2_,param_17._2_2_);
  puVar39 = (undefined1 *)CONCAT22(param_19._0_2_,param_18._2_2_);
  puVar36 = (uint *)CONCAT22(param_20._0_2_,param_19._2_2_);
  puVar35 = (uint *)CONCAT22(param_22._0_2_,param_21._2_2_);
  uVar27 = CONCAT11(param_22._3_1_,param_22._2_1_);
  puVar15 = (uint *)CONCAT22((ushort)param_23,uVar27);
  puVar38 = (uint *)CONCAT22((short)param_24,param_23._2_2_);
  puVar17 = (uint *)CONCAT13(param_25._1_1_,CONCAT12(param_25._0_1_,param_24._2_2_));
  out(*puVar39,uVar27);
  puVar43 = (uint *)(puVar39 + 2);
  if (CARRY1(bVar50,(byte)pbVar37)) {
    out((byte)*puVar43,uVar27);
    puVar43 = (uint *)(puVar39 + 7);
    out(*(undefined4 *)(puVar39 + 3),uVar27);
    puVar36 = (uint *)((int)puVar36 + -1);
    param_31._0_1_ = bVar12;
    param_31._1_1_ = bVar23;
code_r0x008f4ca4:
    puVar2 = (ushort *)((int)puVar38 + (int)puVar36 * 2 + 0x76);
    sVar14 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    param_24._2_2_ = (ushort)puVar40;
    param_25._0_1_ = (undefined1)((uint)puVar40 >> 0x10);
    param_25._1_1_ = (undefined1)((uint)puVar40 >> 0x18);
    puVar36 = (uint *)((longlong)(int)puVar43[0x19] * 0x4d00776f);
    if ((longlong)(int)puVar36 != (longlong)(int)puVar43[0x19] * 0x4d00776f) {
      puVar46 = (undefined4 *)CONCAT13(param_26._1_1_,CONCAT12(param_26._0_1_,param_25._2_2_));
      puVar36 = (uint *)CONCAT22((short)param_27,param_26._2_2_);
      puVar35 = (uint *)CONCAT22(param_29._0_2_,param_28._2_2_);
      puVar38 = (uint *)CONCAT13(param_31._1_1_,CONCAT12((byte)param_31,param_30._2_2_));
      puVar17 = (uint *)CONCAT13(param_32._1_1_,CONCAT12((byte)param_32,param_31._2_2_));
      puVar15 = (uint *)(CONCAT13(param_30._1_1_,CONCAT12((char)param_30,param_29._2_2_)) + 1);
      puVar43 = puVar46 + 1;
      out(*puVar46,(short)puVar15);
      if (-1 < (int)puVar15) {
code_r0x008f4cbb:
        pbVar37 = (byte *)((int)puVar36 + 0x73);
        bVar50 = *pbVar37;
        bVar12 = (byte)((uint)puVar15 >> 8);
        *pbVar37 = *pbVar37 + bVar12;
        if (!CARRY1(bVar50,bVar12)) {
          pcVar18 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) ^ (byte)*puVar43,
                                              (char)puVar38));
          puVar39 = (undefined1 *)((int)puVar40 + 1);
          uVar13 = in((short)puVar15);
          *(undefined1 *)puVar40 = uVar13;
          puVar40 = (undefined4 *)((int)puVar40 + 2);
          uVar13 = in((short)puVar15);
          *puVar39 = uVar13;
code_r0x008f4cc6:
          *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
          *puVar35 = *puVar35 ^ (int)&param_31 + 1U;
          param_30._1_1_ = (char)pcVar18;
          param_30._2_2_ = (ushort)((uint)pcVar18 >> 8);
          param_31._0_1_ = (byte)((uint)pcVar18 >> 0x18);
code_r0x008f4ccb:
          *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
          *puVar35 = *puVar35 ^ (uint)&param_31;
          puVar43 = (uint *)((int)puVar43 + -2);
          *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
          *pcVar18 = *pcVar18 + (char)((uint)puVar15 >> 8);
          puVar38 = (uint *)((uint)pcVar18 & *(uint *)(pcVar18 + 0x4e));
code_r0x008f4cdc:
          *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
          bVar12 = (byte)param_31;
          bVar23 = param_31._1_1_;
code_r0x008f4cdf:
          param_31._1_1_ = bVar23;
          param_31._0_1_ = bVar12;
          *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)puVar15 >> 8);
          bVar12 = (byte)param_31;
          bVar23 = param_31._1_1_;
          goto code_r0x008f4ce1;
        }
        puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),(char)puVar17 + -0x20);
        goto code_r0x008f4ce5;
      }
      cVar11 = (char)param_31._2_2_ + -0x20;
      puVar16 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),cVar11);
      bVar47 = true;
      if (cVar11 < '\0') goto code_r0x008f4d01;
PTR_LAB_008f4d7c:
      puVar2 = (ushort *)(in_GS_OFFSET + (int)puVar16);
      sVar14 = ((ushort)puVar16 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
      pbVar37 = (byte *)((int)puVar43 + -1);
      puVar43 = (uint *)((int)puVar43 + 3);
      out(*(undefined4 *)pbVar37,(short)puVar15);
code_r0x008f4d7b:
      *(byte *)((int)puVar36 + 99) = *(byte *)((int)puVar36 + 99) + (char)puVar16;
      *(byte *)((int)puVar43 + 0x6f) = *(byte *)((int)puVar43 + 0x6f) + (char)puVar38;
      puVar46 = (undefined4 *)((int)puVar40 + -1);
      puVar2 = (ushort *)((int)puVar16 * 2 + 0x53);
      sVar14 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
      puVar17 = puVar16;
      goto code_r0x008f4d89;
    }
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
    pcVar18 = (char *)((int)puVar40 + 99);
    *pcVar18 = *pcVar18 + (char)puVar38;
    if (*pcVar18 == '\0') goto code_r0x008f4d9f;
    pbVar37 = (byte *)((int)puVar35 + 0x65);
    bVar50 = *pbVar37;
    *pbVar37 = *pbVar37 + (char)puVar15;
    if (!SCARRY1(bVar50,(char)puVar15)) goto code_r0x008f4d38;
s_Saturday_008f4dac:
    param_23._2_2_ = SUB42(puVar35,0);
    param_24._0_2_ = (short)((uint)puVar35 >> 0x10);
DAT_008f4da4:
    pcVar18 = (char *)CONCAT22(param_39._0_2_,param_38._2_2_);
    out(*(undefined1 *)CONCAT22((short)param_33,param_32._2_2_),param_36._2_2_);
    pbVar37 = (byte *)(CONCAT22(param_36._0_2_,param_35._2_2_) + 0x61);
    bVar50 = *pbVar37;
    bVar12 = (byte)((uint)param_36 >> 0x10);
    *pbVar37 = *pbVar37 + bVar12;
    cVar11 = (char)((uint)param_38 >> 0x10);
    if (*pbVar37 == 0) {
      *pcVar18 = *pcVar18 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (CARRY1(bVar50,bVar12)) {
      *pcVar18 = *pcVar18 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar6 = (char *)CONCAT22(param_47._0_2_,param_46._2_2_);
    cVar11 = (char)((uint)param_46 >> 0x10);
    *pcVar6 = *pcVar6 + cVar11;
    pcVar18 = (char *)(CONCAT22(param_41._0_2_,param_40._2_2_) + 0x72);
    *pcVar18 = *pcVar18 + cVar11;
    if (*pcVar18 != '\0') {
      *pcVar6 = *pcVar6 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((longlong)((int)&param_16 + 2) ==
        (longlong)*(int *)(CONCAT22(param_46._0_2_,param_45._2_2_) + 0x79) * 0x68540000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar44 = CONCAT22(param_17._0_2_,param_16._2_2_);
    puVar39 = (undefined1 *)CONCAT22(param_18._0_2_,param_17._2_2_);
    pcVar18 = (char *)CONCAT22((short)param_24,param_23._2_2_);
code_r0x008f4dc7:
    *pcVar18 = *pcVar18 + (char)pcVar18;
    pbVar37 = (byte *)(iVar44 + 0x65);
    bVar47 = CARRY1(*pbVar37,(byte)param_21._2_2_);
    *pbVar37 = *pbVar37 + (byte)param_21._2_2_;
    out(*puVar39,param_21._2_2_);
code_r0x008f4dd0:
    sVar14 = param_31._2_2_;
    if (!bVar47) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar37 = (byte *)CONCAT13(param_32._1_1_,CONCAT12((byte)param_32,param_31._2_2_));
    param_31._2_2_ = (short)&param_32 + 2;
    bVar47 = CARRY1(*pbVar37,(byte)sVar14);
    *pbVar37 = *pbVar37 + (byte)sVar14;
    param_32._0_1_ = (byte)((uint)((int)&param_32 + 2) >> 0x10);
    param_32._1_1_ = (undefined1)((uint)((int)&param_32 + 2) >> 0x18);
    if (*pbVar37 != 0) {
      return;
    }
joined_r0x008f4dda:
    if (!bVar47) {
      return;
    }
    out(*(undefined4 *)CONCAT22((short)param_33,param_32._2_2_),param_36._2_2_);
    out(*(undefined1 *)((undefined4 *)CONCAT22((short)param_33,param_32._2_2_) + 1),param_36._2_2_);
    pcVar18 = (char *)(CONCAT22(param_44._0_2_,param_43._2_2_) + 0x75);
    *pcVar18 = *pcVar18 + (char)((uint)param_44 >> 0x10);
    out(*(undefined1 *)CONCAT22(param_41._0_2_,param_40._2_2_),param_44._2_2_);
code_r0x008f4deb:
    puVar43 = (uint *)CONCAT22((ushort)param_34,param_33._2_2_);
    pbVar37 = (byte *)(CONCAT22(param_37._0_2_,param_36._2_2_) + 0x61);
    bVar47 = CARRY1(*pbVar37,bVar25);
    *pbVar37 = *pbVar37 + bVar25;
DAT_008f4df4:
    puVar38 = (uint *)CONCAT22((short)param_33,param_32._2_2_);
    puVar36 = (uint *)CONCAT22(param_35._0_2_,param_34._2_2_);
    puVar35 = (uint *)CONCAT22(param_37._0_2_,param_36._2_2_);
    puVar15 = (uint *)CONCAT22(param_38._0_2_,param_37._2_2_);
    pbVar37 = (byte *)CONCAT22(param_39._0_2_,param_38._2_2_);
    iVar44 = CONCAT22(param_40._0_2_,param_39._2_2_);
    register0x00000010 = (undefined1 *)((int)&param_40 + 2);
    puVar43 = (uint *)((int)puVar43 + 1);
    if (!bVar47) {
      pcVar18 = (char *)(iVar44 + 0x75 + (int)puVar36 * 2);
      *pcVar18 = *pcVar18 + bVar25;
      *(char *)((int)puVar38 + 0x65) = *(char *)((int)puVar38 + 0x65) + bVar25;
      pbVar30 = (byte *)((int)User32Reserved + (int)((int)puVar36 + (int)puVar43 * 2 + 0x21));
      *pbVar30 = *pbVar30 + bVar25;
code_r0x008f4e03:
      *(byte *)((int)puVar36 + 0x6f) = *(byte *)((int)puVar36 + 0x6f) + (char)pbVar37;
      out((byte)*puVar43,(short)puVar15);
      *(byte *)((int)puVar35 + 0x75) = *(byte *)((int)puVar35 + 0x75) + (char)puVar15;
      out(*(byte *)((int)puVar43 + 1),(short)puVar15);
      pbVar37 = pbVar37 + 0x2f;
      bVar12 = *pbVar37;
      bVar23 = (byte)((uint)iVar44 >> 8);
      bVar50 = *pbVar37;
      *pbVar37 = *pbVar37 + bVar23;
      puVar43 = (uint *)CONCAT13(param_42._1_1_,CONCAT12((byte)param_42,param_41._2_2_));
      puVar36 = (uint *)CONCAT22((undefined2)param_43,param_42._2_2_);
      pbVar30 = (byte *)CONCAT22(param_45._0_2_,param_44._2_2_);
      uVar20 = CONCAT22(param_46._0_2_,param_45._2_2_);
      pbVar24 = (byte *)CONCAT22(param_47._0_2_,param_46._2_2_);
      puVar38 = (undefined4 *)CONCAT22(param_41._0_2_,param_40._2_2_) + 1;
      uVar4 = in(param_45._2_2_);
      *(undefined4 *)CONCAT22(param_41._0_2_,param_40._2_2_) = uVar4;
      bVar48 = (byte)((uint)param_47 >> 0x10);
      in_AF = 9 < (bVar48 & 0xf) | in_AF;
      cVar11 = bVar48 + in_AF * -6 + (0x99 < bVar48 || CARRY1(bVar12,bVar23)) * -0x60;
      pbVar21 = (byte *)CONCAT31((int3)(CONCAT22(param_48,param_47._2_2_) >> 8),cVar11);
      if (!SCARRY1(bVar50,bVar23)) {
        *pbVar21 = *pbVar21 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar17 = puVar38;
      unique0x10002095 = puVar3;
      if ((0x99 >= bVar48 && !CARRY1(bVar12,bVar23)) && cVar11 != '\0') goto code_r0x008f4e84;
      goto code_r0x008f4e4c;
    }
    bVar50 = (byte)((uint)param_39 >> 0x10);
    in_AF = 9 < (bVar50 & 0xf) | in_AF;
    uVar20 = CONCAT31((int3)((uint)iVar44 >> 8),bVar50 + in_AF * '\x06' + '`');
    bVar47 = uVar20 < 0x11cfe958;
    iVar44 = uVar20 + 0xee3016a8;
    puVar7 = puVar43;
  }
  else {
    if (SCARRY4((int)(puVar39 + 1),1)) {
      *(byte *)puVar17 = (byte)*puVar17 + (char)param_24._2_2_;
s_1_SNAN_008f4ce0:
      *puVar35 = *puVar35 ^ (int)&param_25 + 2U;
      param_31._1_1_ = (byte)puVar35;
      param_31._2_2_ = (short)((uint)puVar35 >> 8);
      param_32._0_1_ = (byte)((uint)puVar35 >> 0x18);
      puVar43 = (uint *)((int)puVar43 + -1);
      bVar23 = param_31._1_1_;
code_r0x008f4ce1:
      param_31._1_1_ = bVar23;
      param_31._0_1_ = bVar12;
      puVar15 = (uint *)((uint)puVar15 & *(uint *)((int)puVar35 + 0x4e));
      puVar38 = (uint *)((int)puVar38 + 1);
code_r0x008f4ce5:
      puVar43 = (uint *)((int)puVar43 + -1);
      *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
      pbVar37 = (byte *)((int)puVar17 + -1);
      bVar50 = (byte)((uint)pbVar37 >> 8);
      in_stack_000000d8._1_1_ = in_stack_000000d8._1_1_ + bVar50;
      puVar16 = (uint *)CONCAT31((int3)((uint)pbVar37 >> 8),(char)pbVar37 + -0x20);
      puVar36 = puVar36 + -1;
      param_42._1_1_ = param_42._1_1_ & bVar50;
      pbVar37 = (byte *)((int)puVar38 + 0x79);
      *pbVar37 = *pbVar37 & (byte)((uint)puVar35 >> 8);
      bVar47 = (char)*pbVar37 < '\0';
code_r0x008f4d01:
      puVar46 = puVar40;
      if (!bVar47) goto PTR_LAB_008f4d7c;
code_r0x008f4d03:
      pbVar37 = (byte *)((int)puVar36 + 0x2f);
      bVar50 = *pbVar37;
      bVar23 = (byte)puVar38;
      *pbVar37 = *pbVar37 + bVar23;
      bVar12 = (byte)puVar16;
      in_AF = 9 < (bVar12 & 0xf) | in_AF;
      cVar11 = bVar12 + in_AF * -6 + (0x99 < bVar12 || CARRY1(bVar50,bVar23)) * -0x60;
      puVar17 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),cVar11);
      if (cVar11 < '\0') {
        *(byte *)puVar17 = (byte)*puVar17 + cVar11;
        param_25._2_2_ = (undefined2)((uint)puVar16 >> 8);
        param_26._0_1_ = (undefined1)((uint)puVar16 >> 0x18);
        *(byte *)puVar17 = (byte)*puVar17 + cVar11;
        puVar38 = (uint *)((int)puVar38 + 1);
        puVar36 = (uint *)((int)puVar36 + -2);
        goto code_r0x008f4d12;
      }
      *(char *)((int)puVar46 + 99) = *(char *)((int)puVar46 + 99) + bVar23;
      param_31._2_2_ = (short)puVar35;
      param_32._0_1_ = (byte)((uint)puVar35 >> 0x10);
      param_32._1_1_ = (undefined1)((uint)puVar35 >> 0x18);
code_r0x008f4d89:
      pbVar37 = (byte *)((int)puVar38 + 1);
      if (pbVar37 == (byte *)0x0) {
        *(byte *)((int)puVar15 + 0x75) = *(byte *)((int)puVar15 + 0x75);
        uVar13 = in((short)puVar15);
        *(undefined1 *)puVar46 = uVar13;
        *(byte *)((int)puVar15 + 0x75) = *(byte *)((int)puVar15 + 0x75);
        out((byte)*puVar43,(short)puVar15);
        *(byte *)((int)puVar36 + 0x61) = *(byte *)((int)puVar36 + 0x61);
        puVar38 = (uint *)((int)puVar38 + 2);
code_r0x008f4d9f:
        *(byte *)((int)puVar36 + 0x61) = *(byte *)((int)puVar36 + 0x61) + (char)puVar38;
        goto DAT_008f4da4;
      }
      iVar44 = *puVar17 * 0x756854;
      pbVar30 = (byte *)((int)User32Reserved + (int)((int)puVar36 + (int)puVar43 * 2 + 0x21));
      *pbVar30 = *pbVar30 + (char)puVar15;
      goto code_r0x008f4e03;
    }
    pbVar37 = (byte *)((int)puVar36 + -1);
    bVar47 = puVar36 != (uint *)0x1;
    puVar40 = (undefined4 *)CONCAT13(param_26._1_1_,CONCAT12(param_26._0_1_,param_25._2_2_));
    puVar43 = (uint *)CONCAT22((short)param_27,param_26._2_2_);
    puVar36 = (uint *)CONCAT22(param_28._0_2_,param_27._2_2_);
    puVar35 = (uint *)CONCAT13(param_30._1_1_,CONCAT12((char)param_30,param_29._2_2_));
    puVar15 = (uint *)CONCAT13(bVar23,CONCAT12(bVar12,param_30._2_2_));
    puVar38 = (uint *)CONCAT13(param_32._1_1_,CONCAT12((byte)param_32,param_31._2_2_));
    puVar17 = (uint *)CONCAT22((short)param_33,param_32._2_2_);
    if (-1 < (int)pbVar37) {
      puVar38 = (uint *)((int)puVar38 + 1);
      param_31._0_1_ = bVar12;
      param_31._1_1_ = bVar23;
      goto code_r0x008f4cbb;
    }
    if (bVar47) goto s_1_SNAN_008f4ce0;
    puVar15 = (uint *)((int)puVar15 + -1);
    if (puVar15 != (uint *)0x0) goto code_r0x008f4ce1;
    bVar47 = SCARRY4((int)puVar38,1);
    puVar38 = (uint *)((int)puVar38 + 1);
    if (puVar38 != (uint *)0x0) goto code_r0x008f4cdf;
    param_31._2_2_ = (short)((uint)puVar35 >> 0x10);
    pcVar18 = (char *)0x0;
    if (bVar47) goto code_r0x008f4ccb;
    puVar2 = (ushort *)((int)puVar43 + 0x6f);
    sVar14 = (param_26._2_2_ & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    if (0 < sVar14) goto code_r0x008f4cc6;
    puVar2 = (ushort *)(in_GS_OFFSET + (int)puVar17);
    sVar14 = (param_32._2_2_ & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    bVar12 = (byte)param_32._2_2_;
    *(byte *)puVar17 = (byte)*puVar17 + bVar12;
    *(undefined1 *)((int)puVar35 * 2) = *(undefined1 *)((int)puVar35 * 2);
    pbVar37 = (byte *)((int)puVar40 + 0x65);
    bVar50 = *pbVar37;
    *pbVar37 = *pbVar37 + bVar12;
    if (*pbVar37 == 0) goto code_r0x008f4cdc;
    puVar46 = (undefined4 *)CONCAT22(param_31._2_2_,param_29._2_2_);
    puVar17 = (uint *)CONCAT22(param_32._2_2_,CONCAT11(param_32._1_1_,(byte)param_32));
    bVar23 = (byte)param_38;
    puVar15 = param_36;
    puVar35 = param_35;
    puVar36 = param_33;
    if (!CARRY1(bVar50,bVar12)) {
      in_AF = 9 < (bVar23 & 0xf) | in_AF;
      puVar16 = (uint *)CONCAT31((int3)((uint)param_38 >> 8),
                                 bVar23 + in_AF * -6 +
                                 (0x99 < bVar23 || CARRY1(bVar50,bVar12)) * -0x60);
      puVar38 = param_37;
      puVar43 = puVar17;
      goto code_r0x008f4d03;
    }
    puVar38 = (uint *)((int)param_37 + 1);
    puVar2 = (ushort *)((byte *)((int)param_37 + 0x77) + (int)param_33 * 2);
    sVar14 = ((byte)param_32 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    param_31._2_2_ = (short)((uint)param_38 >> 8);
    param_32._0_1_ = (byte)((uint)param_38 >> 0x18);
    puVar43 = puVar17 + 1;
    out(*puVar17,param_36._0_2_);
    puVar17 = param_38;
    param_31._1_1_ = bVar23;
    if (!SCARRY4((int)param_37,1)) {
      pcVar18 = (char *)((int)puVar46 + 0x65);
      *pcVar18 = *pcVar18 + bVar23;
      puVar40 = puVar46;
      if (*pcVar18 != '\0') goto code_r0x008f4ca4;
      goto code_r0x008f4ce5;
    }
code_r0x008f4d12:
    bVar50 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar50;
    puVar2 = (ushort *)((int)puVar36 + in_GS_OFFSET + 0x6d);
    sVar14 = ((short)&param_31 + 2U & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    *(byte *)puVar17 = (byte)*puVar17 + bVar50;
    uVar20 = *puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar50;
    pbVar37 = (byte *)((int)puVar43 + -1);
    puVar43 = (uint *)((int)puVar43 + 3);
    out(*(undefined4 *)pbVar37,(short)puVar15);
    if (CARRY1((byte)uVar20,bVar50) || pbVar37 == (byte *)0x0) goto code_r0x008f4d89;
    uVar4 = in((short)puVar15);
    *puVar46 = uVar4;
    *(byte *)puVar17 = (byte)*puVar17 + bVar50;
    *(byte *)puVar17 = (byte)*puVar17 + bVar50;
    puVar40 = (undefined4 *)((int)puVar46 + 3);
    puVar2 = (ushort *)((int)puVar46 + (int)puVar36 * 2 + 0x65);
    sVar14 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar14) * sVar14;
    param_24._2_2_ = (ushort)puVar35;
    param_25._0_1_ = (undefined1)((uint)puVar35 >> 0x10);
    param_25._1_1_ = (undefined1)((uint)puVar35 >> 0x18);
    if (SBORROW4((int)(puVar46 + 1),1)) goto s_Saturday_008f4dac;
code_r0x008f4d38:
    uVar27 = SUB42(puVar15,0);
    uVar4 = in(uVar27);
    *puVar40 = uVar4;
    bVar12 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar12;
    pbVar37 = (byte *)((int)puVar38 + 0x75);
    bVar50 = *pbVar37;
    *pbVar37 = *pbVar37 + bVar12;
    if (*pbVar37 != 0) {
      if (CARRY1(bVar50,bVar12)) {
        *(byte *)puVar17 = (byte)*puVar17 + bVar12;
        *(byte *)puVar17 = (byte)*puVar17 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar37 = (byte *)(CONCAT13(param_32._1_1_,CONCAT12((byte)param_32,param_31._2_2_)) + 0x75 +
                        CONCAT22((short)param_27,param_26._2_2_) * 2);
      bVar50 = *pbVar37;
      *pbVar37 = *pbVar37 + bVar48;
      if (CARRY1(bVar50,bVar48)) {
        halt_baddata();
      }
      iVar44 = CONCAT22((short)param_33,param_32._2_2_);
      puVar39 = (undefined1 *)CONCAT22((ushort)param_34,param_33._2_2_);
      pcVar18 = (char *)CONCAT22(param_40._0_2_,param_39._2_2_);
      param_21._2_2_ = param_37._2_2_;
      goto code_r0x008f4dc7;
    }
    *(byte *)((int)puVar15 + 0x75) = *(byte *)((int)puVar15 + 0x75) + (char)puVar38;
    uVar13 = in(uVar27);
    *(undefined1 *)(puVar40 + 1) = uVar13;
    *(byte *)puVar17 = (byte)*puVar17 + bVar12;
    *(byte *)((int)puVar15 + 0x75) = *(byte *)((int)puVar15 + 0x75) + (char)puVar38;
    pbVar37 = (byte *)((int)puVar43 + 1);
    out((byte)*puVar43,uVar27);
    *(byte *)(in_GS_OFFSET + (int)puVar17) = *(byte *)(in_GS_OFFSET + (int)puVar17) + bVar12;
    bVar47 = CARRY1((byte)*puVar17,bVar12);
    *(byte *)puVar17 = (byte)*puVar17 + bVar12;
    if (SCARRY4((int)puVar38,1)) {
      out(*pbVar37,uVar27);
      goto code_r0x008f4dd0;
    }
    sVar14 = -((ushort)*puVar17 & 3);
    *(ushort *)puVar17 = (short)*puVar17 + (ushort)(0 < sVar14) * sVar14;
    uVar19 = *puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar12;
    puVar38 = (uint *)CONCAT13(param_25._1_1_,CONCAT12(param_25._0_1_,param_24._2_2_));
    puVar43 = (uint *)CONCAT13(param_26._1_1_,CONCAT12(param_26._0_1_,param_25._2_2_));
    puVar36 = (uint *)CONCAT22((short)param_27,param_26._2_2_);
    pbVar30 = (byte *)CONCAT22(param_29._0_2_,param_28._2_2_);
    uVar20 = CONCAT13(param_30._1_1_,CONCAT12((char)param_30,param_29._2_2_));
    pbVar24 = (byte *)CONCAT13(param_31._1_1_,CONCAT12((byte)param_31,param_30._2_2_));
    pbVar21 = (byte *)CONCAT13(param_32._1_1_,CONCAT12((byte)param_32,param_31._2_2_));
    if (!CARRY1((byte)uVar19,bVar12)) {
      bVar50 = (byte)param_31._2_2_;
      *pbVar21 = *pbVar21 + bVar50;
      bVar47 = CARRY1(*pbVar21,bVar50);
      *pbVar21 = *pbVar21 + bVar50;
      puVar40 = (undefined4 *)CONCAT22((short)param_33,param_32._2_2_);
      puVar36 = (uint *)CONCAT22(param_35._0_2_,param_34._2_2_);
      puVar35 = (uint *)CONCAT22(param_37._0_2_,param_36._2_2_);
      puVar15 = (uint *)CONCAT22(param_38._0_2_,param_37._2_2_);
      puVar38 = (uint *)CONCAT22(param_39._0_2_,param_38._2_2_);
      puVar16 = (uint *)CONCAT22(param_40._0_2_,param_39._2_2_);
      puVar43 = (uint *)((undefined1 *)CONCAT22((ushort)param_34,param_33._2_2_) + 1);
      out(*(undefined1 *)CONCAT22((ushort)param_34,param_33._2_2_),param_37._2_2_);
      if (uVar20 != 1) goto joined_r0x008f4dda;
      if (!bVar47) goto code_r0x008f4d7b;
      goto DAT_008f4df4;
    }
    if (pbVar37 == (byte *)0xffffffff) goto code_r0x008f4deb;
    *pbVar30 = *pbVar30 | bVar8;
code_r0x008f4e4c:
    pbVar37 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),CONCAT11(0xc2,(byte)pbVar24));
    bVar50 = (byte)pbVar21;
    *pbVar21 = bVar50;
    in_AF = 9 < (bVar50 & 0xf) | in_AF;
    uVar19 = CONCAT31((int3)((uint)pbVar21 >> 8),bVar50 + in_AF * -6) & 0xffffff0f;
    cVar11 = (char)((uint)pbVar21 >> 8) - in_AF;
    uVar19 = CONCAT22((short)(uVar19 >> 0x10),CONCAT11(cVar11,(char)uVar19));
    bVar50 = ((byte)pbVar24 & 0x1f) % 9;
    *pbVar37 = *pbVar37 << bVar50 | (byte)(CONCAT11(in_AF,*pbVar37) >> 9 - bVar50);
    puVar35 = (uint *)CONCAT22((short)((uint)pbVar30 >> 0x10),0x7400);
    *(char *)(uVar19 + 8) = *(char *)(uVar19 + 8) + cVar11;
    puVar15 = (uint *)(uVar20 ^ *puVar43);
    piVar1 = (int *)(uVar19 + 0x27);
    iVar44 = *piVar1;
    *piVar1 = *piVar1 << 6;
    uVar20 = (uint)(iVar44 << 5 < 0);
    bVar47 = uVar19 < 0x11cfe957 || uVar19 + 0xee3016a9 < uVar20;
    iVar44 = (uVar19 + 0xee3016a9) - uVar20;
    unique0x10002091 = puVar3;
  }
  puVar17 = puVar38 + 1;
  *puVar38 = *puVar43;
  pbVar30 = (byte *)((uint)puVar35 & 0xffffff00);
  pbVar21 = (byte *)CONCAT31((int3)((uint)iVar44 >> 8),-0x3f - bVar47);
  *pbVar21 = *pbVar21 + (-0x3f - bVar47);
  bVar12 = (byte)((uint)pbVar37 >> 8);
  bVar48 = (byte)((uint)puVar35 >> 8);
  pbVar24 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),CONCAT11(bVar12 - bVar48,(byte)pbVar37))
  ;
  bVar50 = ((byte)pbVar37 & 0x1f) % 9;
  *pbVar24 = *pbVar24 << bVar50 | (byte)(CONCAT11(bVar12 < bVar48,*pbVar24) >> 9 - bVar50);
  uVar20 = CONCAT31((int3)((uint)puVar15 >> 8),0x7a);
  pbVar21[-0x69cedd37] = pbVar21[-0x69cedd37] + (char)((uint)iVar44 >> 8);
  puVar43[-0xd] = puVar43[-0xd] ^ (uint)(puVar43 + 1);
  param_31._2_2_ = in_ES;
code_r0x008f4e84:
  register0x00000010 = (undefined1 *)((int)&param_31 + 2);
  pbVar21 = pbVar21 + 0x48cc2f83;
  uVar32 = (undefined3)((uint)pbVar30 >> 8);
  uVar31 = CONCAT31(uVar32,(char)((uint)pbVar21 >> 8));
  param_30._2_2_ = CONCAT11((char)pbVar30,(char)pbVar21);
  uVar22 = (uint)param_30._2_2_;
  *(int *)(uVar31 + 0x11d31f22) = *(int *)(uVar31 + 0x11d31f22) + uVar20;
  uVar19 = uRam88498623 & 0xd2;
  uRam88498623 = uRam88498623 & 0xffffffd2;
  bVar50 = 0;
  if (uVar19 == 0) {
    param_31._0_1_ = (byte)((uint)pbVar21 >> 0x10);
    param_31._1_1_ = (byte)((uint)pbVar21 >> 0x18);
    param_29._2_2_ = SUB42(pbVar24,0);
    param_30._0_1_ = (char)((uint)pbVar24 >> 0x10);
    param_30._1_1_ = (char)((uint)pbVar24 >> 0x18);
    param_28._2_2_ = (undefined2)uVar20;
    param_29._0_2_ = (undefined2)(uVar20 >> 0x10);
    param_27._2_2_ = (undefined2)uVar31;
    param_28._0_2_ = (undefined2)((uint)pbVar30 >> 0x10);
    param_25._2_2_ = SUB42(puVar36,0);
    param_26._0_1_ = (undefined1)((uint)puVar36 >> 0x10);
    param_26._1_1_ = (undefined1)((uint)puVar36 >> 0x18);
    param_24._2_2_ = 0x8623;
    param_25._0_1_ = 0x49;
    param_25._1_1_ = 0x88;
    param_23._2_2_ = SUB42(puVar17,0);
    param_24._0_2_ = (short)((uint)puVar17 >> 0x10);
    out(uRam88498623,param_28._2_2_);
    uRam50bf453d = (char)pbVar21;
    puVar36[-0x16bc6e34] = puVar36[-0x16bc6e34] | uVar31;
    uVar13 = in(10);
    puVar17 = puVar17 + -1;
    iVar44 = -0x77b679e5;
    sVar14 = (short)CONCAT31(uVar32,uVar13) + -1;
    uRamaa418f41 = (uint)sVar14;
    puVar43 = *(uint **)(&stack0x7277e115 + uRamaa418f41);
    *(char *)((uRamaa418f41 - 0x3a) + (int)puVar17 * 2) = (char)sVar14;
    bVar48 = 0x456caf4c < uRamaa418f41 ||
             CARRY4(uRamaa418f41 + 0xba9350b3,(uint)(puVar43 < puVar17));
    bVar49 = SCARRY4((int)pbVar24,1);
    pbVar24 = pbVar24 + 1;
    bVar51 = (int)pbVar24 < 0;
    bVar47 = pbVar24 == (byte *)0x0;
    bVar12 = POPCOUNT((uint)pbVar24 & 0xff);
    unique0x10002099 = puVar7;
    do {
      param_22._3_1_ =
           (byte)((uint)(in_NT & 1) * 0x4000 >> 8) | (byte)((uint)bVar49 * 0x800 >> 8) | 4 |
           (byte)((uint)(bVar50 & 1) * 0x200 >> 8) | (byte)((uint)(in_TF & 1) * 0x100 >> 8);
      param_22._2_1_ =
           bVar51 * -0x80 | bVar47 * '@' | (in_AF & 1) * '\x10' | ((bVar12 & 1) == 0) * '\x04' |
           bVar48;
      param_23._0_2_ =
           (ushort)(in_ID & 1) * 0x20 | (ushort)(in_VIP & 1) * 0x10 | (ushort)(in_VIF & 1) * 8 |
           (ushort)(in_AC & 1) * 4;
      puVar3 = (undefined1 *)segment(0xf000,(short)uVar22 + 0x41);
      *puVar3 = 0xb2;
      param_21._2_2_ = (undefined2)iVar44;
      param_22._0_2_ = (undefined2)((uint)iVar44 >> 0x10);
      param_20._2_2_ = 0xf000;
      param_19._2_2_ = 0x4f03;
      param_20._0_2_ = 0x8f;
      uVar52 = func_0x8c4c25cb();
      piVar1 = (int *)((int)((ulonglong)uVar52 >> 0x20) + 0x6a + extraout_ECX);
      *piVar1 = (*piVar1 - (int)uVar52) - (uint)bVar48;
      iVar44 = iVar44 + -1;
      uVar22 = CONCAT31((int3)(uVar22 >> 8),(char)((ulonglong)uVar52 >> 0x20));
      param_23._2_2_ = (undefined2)((ulonglong)uVar52 >> 0x20);
      param_24._0_2_ = (short)((ulonglong)uVar52 >> 0x30);
      LOCK();
      puVar43 = (uint *)*puVar17;
      *puVar17 = (uint)puVar36;
      UNLOCK();
      bVar12 = (byte)((uint)((int)&param_20 + 2) >> 8);
      bVar48 = CARRY1(param_22._2_1_,bVar12);
      bVar49 = SCARRY1(param_22._2_1_,bVar12);
      cVar11 = param_22._2_1_ + bVar12;
      bVar51 = cVar11 < '\0';
      bVar47 = cVar11 == '\0';
      bVar12 = POPCOUNT(cVar11);
      puVar36 = puVar43;
    } while (CONCAT31((int3)(CONCAT22((short)((uint)extraout_ECX >> 0x10),in_SS) >> 8),0xbd) != 1 &&
             !bVar47);
    return;
  }
  *pbVar24 = *pbVar24 | 0x31;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


