/* ptr_008f45d4 - 0x008f45d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x008f4eec) overlaps instruction at (ram,0x008f4ee9)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x008f486e) */
/* WARNING: Removing unreachable block (ram,0x008f4879) */
/* WARNING: Removing unreachable block (ram,0x008f4807) */
/* WARNING: Removing unreachable block (ram,0x008f46e1) */
/* WARNING: Removing unreachable block (ram,0x008f46e3) */
/* WARNING: Removing unreachable block (ram,0x008f4623) */
/* WARNING: Removing unreachable block (ram,0x008f462a) */
/* WARNING: Removing unreachable block (ram,0x008f46a4) */
/* WARNING: Removing unreachable block (ram,0x008f4708) */
/* WARNING: Removing unreachable block (ram,0x008f4630) */
/* WARNING: Removing unreachable block (ram,0x008f4649) */
/* WARNING: Removing unreachable block (ram,0x008f46ae) */
/* WARNING: Removing unreachable block (ram,0x008f46b0) */
/* WARNING: Removing unreachable block (ram,0x008f46b2) */
/* WARNING: Removing unreachable block (ram,0x008f4721) */
/* WARNING: Removing unreachable block (ram,0x008f4748) */
/* WARNING: Removing unreachable block (ram,0x008f4ac4) */
/* WARNING: Removing unreachable block (ram,0x008f4b38) */
/* WARNING: Removing unreachable block (ram,0x008f4957) */
/* WARNING: Removing unreachable block (ram,0x008f4809) */
/* WARNING: Removing unreachable block (ram,0x008f4878) */
/* WARNING: Removing unreachable block (ram,0x008f487e) */
/* WARNING: Removing unreachable block (ram,0x008f48ee) */
/* WARNING: Removing unreachable block (ram,0x008f4943) */
/* WARNING: Removing unreachable block (ram,0x008f4afc) */
/* WARNING: Removing unreachable block (ram,0x008f488b) */
/* WARNING: Removing unreachable block (ram,0x008f4897) */
/* WARNING: Removing unreachable block (ram,0x008f4676) */
/* WARNING: Removing unreachable block (ram,0x008f4c86) */

void __fastcall
ptr_008f45d4(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4,char *param_5,
            uint *param_6,char *param_7,uint *param_8,undefined4 param_9,uint *param_10,
            uint *param_11,uint *param_12,uint *param_13,uint *param_14,undefined1 *param_15,
            uint *param_16,int param_17,uint *param_18,uint *param_19,uint *param_20,uint *param_21,
            undefined4 *param_22,char *param_23,uint *param_24,uint *param_25,uint *param_26,
            uint *param_27,uint *param_28,uint *param_29,uint *param_30,uint *param_31,
            uint *param_32,uint *param_33,uint *param_34,uint *param_35,uint *param_36,
            uint *param_37,uint *param_38,uint *param_39,uint *param_40,uint *param_41,
            uint *param_42,uint *param_43,uint *param_44,uint *param_45,uint *param_46,
            uint *param_47,uint *param_48,uint *param_49,uint *param_50,uint *param_51,
            uint *param_52,uint *param_53,uint *param_54,uint *param_55,uint *param_56,
            undefined1 *param_57,uint *param_58,undefined4 param_59,uint *param_60,uint *param_61,
            uint *param_62,uint *param_63,uint *param_64,uint *param_65,undefined4 param_66,
            uint *param_67,uint *param_68,undefined4 param_69,uint *param_70,byte *param_71,
            undefined4 param_72,undefined1 *param_73,undefined4 param_74,undefined4 param_75,
            int param_76,undefined4 param_77)

{
  int *piVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  char cVar12;
  undefined1 uVar14;
  short sVar15;
  uint *in_EAX;
  char *pcVar16;
  byte *pbVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  byte bVar25;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  uint *puVar26;
  uint *puVar27;
  byte *pbVar28;
  int extraout_ECX;
  byte bVar29;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  int iVar36;
  uint *puVar37;
  int unaff_EBX;
  byte *pbVar38;
  uint uVar39;
  undefined4 *puVar41;
  ushort uVar42;
  uint *unaff_EBP;
  uint *puVar43;
  uint uVar44;
  undefined4 *unaff_ESI;
  undefined4 *puVar45;
  uint *puVar46;
  uint *puVar47;
  undefined4 *puVar48;
  undefined1 *unaff_EDI;
  undefined1 *puVar49;
  uint *puVar50;
  short in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  int in_GS_OFFSET;
  bool in_CF;
  bool bVar51;
  byte bVar52;
  byte in_AF;
  bool bVar53;
  bool bVar54;
  byte in_TF;
  byte bVar55;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar56;
  int unaff_retaddr;
  int in_stack_00000148;
  undefined4 in_stack_0000014c;
  char *in_stack_00000154;
  uint *in_stack_00000158;
  uint *in_stack_0000015c;
  uint *in_stack_00000160;
  uint *in_stack_00000164;
  uint *in_stack_00000168;
  uint *in_stack_0000016c;
  uint *in_stack_00000170;
  uint *in_stack_00000174;
  undefined4 in_stack_00000178;
  undefined4 *in_stack_0000017c;
  uint *in_stack_00000188;
  undefined4 in_stack_0000018c;
  uint *in_stack_00000194;
  uint *in_stack_00000198;
  uint *in_stack_0000019c;
  uint *in_stack_000001a0;
  uint *in_stack_000001a4;
  uint *in_stack_000001a8;
  uint *in_stack_000001ac;
  uint *in_stack_000001b0;
  uint *in_stack_000001b4;
  byte bVar9;
  byte bVar13;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined3 uVar40;
  
  puVar47 = param_41;
  puVar18 = param_40;
  puVar20 = param_39;
  puVar27 = param_38;
  puVar19 = param_20;
  puVar26 = param_6;
  bVar25 = param_38._1_1_;
  bVar13 = (byte)param_38;
  puVar3 = (undefined1 *)CONCAT22(param_43._0_2_,param_42._2_2_);
  bVar11 = (byte)in_EAX;
  uVar30 = SUB42(param_2,0);
  bVar8 = (byte)param_47;
  bVar9 = (byte)param_45;
  uVar31 = SUB42(param_61,0);
  uVar34 = (undefined2)in_stack_0000018c;
  uVar32 = SUB42(in_stack_000001ac,0);
  param_38._0_1_ = (byte)((uint)param_36 >> 0x10);
  bVar52 = (byte)param_38;
  param_38._1_1_ = (byte)((uint)param_36 >> 0x18);
  bVar7 = param_38._1_1_;
  bVar29 = (byte)((uint)param_44 >> 0x10);
  bVar55 = (byte)((uint)param_46 >> 8);
  uVar33 = SUB42(puVar27,0);
  uVar35 = SUB42(param_37,0);
  if (in_CF) {
    *(byte *)in_EAX = (byte)*in_EAX + bVar11;
    *(char *)(unaff_EBX + 0x61) = *(char *)(unaff_EBX + 0x61) + bVar11;
    out(*(undefined1 *)unaff_ESI,uVar30);
    bVar10 = (byte)param_40;
    bVar51 = CARRY1((byte)*param_40,bVar10);
    uVar44 = *param_40;
    *(byte *)param_40 = (byte)*param_40 + bVar10;
    bVar11 = (byte)*param_40;
    param_40._2_2_ = param_37._2_2_;
    param_1 = param_39;
    param_2 = puVar27;
    puVar43 = param_37;
    puVar37 = param_35;
    puVar46 = param_34;
    puVar26 = param_33;
    if (!SCARRY1((byte)uVar44,bVar10)) {
      out((byte)*param_34,uVar33);
      puVar45 = (undefined4 *)((longlong)(int)param_37[0x1a] * 0x4d202d20);
      bVar51 = (longlong)(int)puVar45 != (longlong)(int)param_37[0x1a] * 0x4d202d20;
      unaff_EBP = param_35;
      puVar50 = param_33;
      param_40._0_2_ = uVar35;
      goto code_r0x008f4663;
    }
code_r0x008f46bc:
    bVar53 = bVar11 == 0;
    param_40._0_2_ = SUB42(puVar43,0);
    param_40._2_2_ = (undefined2)((uint)puVar43 >> 0x10);
    puVar50 = puVar26;
    if (bVar51 || bVar53) {
code_r0x008f46bf:
      bVar11 = in((short)param_2);
      *(byte *)puVar50 = bVar11;
      out(*(undefined1 *)CONCAT22(param_41._2_2_,param_41._0_2_),param_45._0_2_);
      pbVar17 = (byte *)((int)User32Reserved + (int)((int)param_46 + 0x1f));
      *pbVar17 = *pbVar17 + (char)param_46;
      uVar14 = in(param_45._0_2_);
      *(undefined1 *)CONCAT22(param_40._2_2_,param_40._0_2_) = uVar14;
      out((byte)*param_49,param_53._0_2_);
      puVar18 = param_39;
      param_2 = param_37;
      unaff_EBP = param_34;
      puVar47 = param_33;
      puVar50 = param_32;
code_r0x008f46db:
      uVar33 = SUB42(param_2,0);
      out((byte)*puVar47,uVar33);
      sVar15 = -((ushort)*unaff_EBP & 3);
      *(ushort *)unaff_EBP = (short)*unaff_EBP + (ushort)(0 < sVar15) * sVar15;
      *(byte *)((int)puVar47 + 0x73) = *(byte *)((int)puVar47 + 0x73) + (char)puVar18;
      out(*(byte *)((int)puVar47 + 1),uVar33);
      sVar15 = ((ushort)unaff_EBP & 3) - ((ushort)*puVar18 & 3);
      *(ushort *)puVar18 = (short)*puVar18 + (ushort)(0 < sVar15) * sVar15;
      *(byte *)((int)puVar47 + 0x6b) = *(byte *)((int)puVar47 + 0x6b) + (char)puVar18;
      out(*(byte *)((int)puVar47 + 2),uVar33);
      bVar11 = in(uVar33);
      *(byte *)puVar50 = bVar11;
      puVar49 = (undefined1 *)CONCAT22(param_41._2_2_,param_41._0_2_);
      out(*puVar49,param_45._0_2_);
      pcVar16 = puVar49 + -0x200f96;
      *pcVar16 = *pcVar16 + bVar8;
      bVar53 = *pcVar16 == '\0';
      out(puVar49[1],param_45._0_2_);
      out(puVar49[2],param_45._0_2_);
code_r0x008f46fb:
      out(*param_7,(short)param_11);
      puVar49 = (undefined1 *)((longlong)(int)param_10[0x1a] * 0x54202d20);
      puVar18 = param_13;
      param_1 = param_12;
      param_2 = param_11;
      puVar43 = param_10;
      puVar37 = param_8;
      puVar26 = param_6;
      if ((longlong)(int)puVar49 == (longlong)(int)param_10[0x1a] * 0x54202d20) {
code_r0x008f470d:
        lVar5 = (longlong)
                *(int *)((int)User32Reserved + (int)((int)param_1 + (int)puVar37 * 2 + 0x2b)) *
                0x206c616e;
        puVar45 = (undefined4 *)lVar5;
        param_41._0_2_ = SUB42(puVar43,0);
        param_41._2_2_ = (short)((uint)puVar43 >> 0x10);
        out(*puVar45,(short)param_2);
        if ((int)puVar45 == lVar5) {
          *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
          bVar51 = (byte)*puVar18 == 0;
          goto code_r0x008f471c;
        }
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        puVar47 = puVar45 + 1;
        uVar33 = (short)param_2;
        goto code_r0x008f478d;
      }
      if (!bVar53) {
        out(*puVar49,(short)param_11);
        *(byte *)param_13 = (byte)*param_13 + (char)param_13;
        *(byte *)((int)param_8 + 0x6e) =
             *(byte *)((int)param_8 + 0x6e) + (char)((uint)param_13 >> 8);
        puVar50 = param_6;
        goto code_r0x008f47ea;
      }
      param_13._0_2_ = 0x6b20;
      param_13._2_2_ = 0x726f;
      pcVar16 = (char *)(param_17 + 0x6f);
      *pcVar16 = *pcVar16 + (char)((uint)param_18 >> 8);
      puVar47 = param_14;
      uVar42 = (ushort)param_15;
      if (*pcVar16 == '\0') {
        param_20 = (uint *)0x72666120;
      }
      else {
        puVar2 = (ushort *)((int)param_18 + 0x65);
        *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
        sVar15 = ((ushort)param_15 & 3) - ((ushort)*param_20 & 3);
        *(ushort *)param_20 = (short)*param_20 + (ushort)(0 < sVar15) * sVar15;
      }
    }
    else {
      if (!bVar53) goto code_r0x008f4726;
      puVar26 = puVar43 + 0x1b;
      uVar44 = *puVar26;
      bVar11 = (byte)((uint)param_2 >> 8);
      *(byte *)puVar26 = (byte)*puVar26 + bVar11;
      puVar47 = puVar46 + 1;
      out(*puVar46,(short)param_2);
      puVar19 = puVar18;
      uVar33 = (short)param_2;
      if (!CARRY1((byte)uVar44,bVar11) && (byte)*puVar26 != 0) goto code_r0x008f478d;
code_r0x008f47ee:
      param_18 = param_2;
      *(byte *)((int)puVar43 + -0x200f86) =
           *(byte *)((int)puVar43 + -0x200f86) + (char)((uint)puVar19 >> 8);
      puVar2 = (ushort *)(in_GS_OFFSET + (int)puVar19);
      sVar15 = ((ushort)puVar37 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
      uVar42 = (ushort)puVar37;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    puVar2 = (ushort *)((int)puVar19 + 0x69);
    sVar15 = (uVar42 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    out((byte)*puVar47,(short)param_18);
    *(byte *)param_29 = (byte)*param_29 + (char)param_29;
    *(byte *)((int)param_27 + 0x72) = *(byte *)((int)param_27 + 0x72) + (char)((uint)param_29 >> 8);
    lVar5 = (longlong)*(int *)((int)param_28 + 0x69) * 0x6d61006e;
    if ((int)lVar5 != lVar5) {
      uVar4 = in(param_27._0_2_);
      *param_22 = uVar4;
code_r0x008f48f6:
      bVar55 = in(param_35._0_2_);
      *(byte *)param_30 = bVar55;
      *(byte *)param_45 = (byte)*param_45 + bVar9;
      puVar18 = param_42 + 0x1c;
      *(byte *)puVar18 = (byte)*puVar18 + (char)((uint)param_43 >> 8);
      bVar53 = (byte)*puVar18 == 0;
      puVar47 = (uint *)CONCAT22(param_47._2_2_,param_47._0_2_);
      puVar18 = param_53;
      puVar26 = param_50;
      puVar50 = param_46;
      uVar33 = param_51._0_2_;
code_r0x008f48ff:
      out((byte)*puVar47,uVar33);
      puVar45 = (undefined4 *)((longlong)(int)puVar26[0x1a] * 0x206c652d);
      bVar51 = (longlong)(int)puVar45 != (longlong)(int)puVar26[0x1a] * 0x206c652d;
      if (!bVar51) {
        in_stack_00000158 = (uint *)0x6968632d;
        goto code_r0x008f496f;
      }
      bVar55 = in(uVar33);
      *(byte *)puVar50 = bVar55;
      if (bVar51 || bVar53) {
        in_stack_00000158 = (uint *)0x656c69;
        uVar44 = *puVar18;
        *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
        bVar51 = (byte)*puVar18 == 0;
        if (!CARRY1((byte)uVar44,(byte)puVar18)) {
          puVar46 = (uint *)0x656c69;
          pbVar17 = (byte *)0x656c69;
          puVar19 = in_stack_00000170;
          puVar26 = in_stack_0000016c;
          puVar37 = in_stack_00000168;
          puVar18 = in_stack_00000164;
          puVar43 = in_stack_0000015c;
          goto code_r0x008f49e7;
        }
      }
      else {
        out(*puVar45,uVar33);
        if (bVar51) goto code_r0x008f4912;
        puVar18 = in_stack_00000168 + 0x1c;
        *(byte *)puVar18 = (byte)*puVar18 + (char)((uint)in_stack_0000016c >> 8);
        bVar51 = (byte)*puVar18 == 0;
      }
code_r0x008f4976:
      out((byte)*in_stack_0000015c,(short)in_stack_0000016c);
      out(*(undefined1 *)in_stack_0000017c,uVar34);
      puVar45 = (undefined4 *)((undefined1 *)(in_stack_00000188[0x1a] * 0x6772612d) + 1);
      out(*(undefined1 *)(in_stack_00000188[0x1a] * 0x6772612d),uVar34);
      if (!bVar51) goto code_r0x008f4993;
      puVar49 = (undefined1 *)segment(in_ES,(short)in_stack_00000178);
      uVar14 = in(uVar34);
      *puVar49 = uVar14;
      puVar18 = in_stack_00000188;
code_r0x008f49fe:
      bVar51 = (longlong)(int)((longlong)(int)puVar18[0x1a] * 0x67000000) !=
               (longlong)(int)puVar18[0x1a] * 0x67000000;
code_r0x008f4a05:
      if (!bVar51) {
code_r0x008f4a08:
        out((byte)*in_stack_0000019c,uVar32);
        puVar18 = (uint *)((int)in_stack_000001b4 + -0x73697773);
        *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
        pbVar17 = (byte *)((int)in_stack_00000198 + 0x65);
        bVar55 = *pbVar17;
        bVar11 = (byte)((uint)puVar18 >> 8);
        *pbVar17 = *pbVar17 + bVar11;
        if (!CARRY1(bVar55,bVar11)) goto code_r0x008f4a18;
code_r0x008f4a85:
        puVar27 = puVar18;
        param_22._2_2_ = 0x6c65;
        puVar26 = in_stack_000001b0;
        puVar37 = in_stack_000001ac;
        puVar18 = in_stack_000001a8;
        puVar43 = in_stack_000001a0;
        puVar47 = in_stack_00000198;
        goto code_r0x008f4a8a;
      }
      in_stack_00000194 = (uint *)0x6e61632d;
code_r0x008f4a7a:
      out((byte)*in_stack_00000198,(short)in_stack_000001a8);
      puVar2 = (ushort *)((int)in_stack_000001b0 + 0x2d);
      sVar15 = ((ushort)in_stack_0000019c & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
      puVar27 = in_stack_000001b0;
      puVar26 = in_stack_000001ac;
      puVar37 = in_stack_000001a8;
      puVar18 = in_stack_000001a4;
      puVar43 = in_stack_0000019c;
      puVar47 = in_stack_00000194;
code_r0x008f4a8a:
      sVar15 = (short)puVar47;
      segment(in_DS,(short)puVar18 + sVar15 + 0x6e);
      puVar49 = (undefined1 *)segment(in_ES,sVar15);
      uVar14 = in((short)puVar37);
      *puVar49 = uVar14;
      puVar19 = puVar27;
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),sVar15 + 1);
      uVar35 = (short)puVar37;
code_r0x008f4a9b:
      cVar12 = (char)((uint)puVar19 >> 8);
      *(byte *)((int)puVar43 + 0x6e) = *(byte *)((int)puVar43 + 0x6e) + cVar12;
      sVar15 = (short)puVar47;
      puVar49 = (undefined1 *)segment(in_ES,sVar15);
      uVar14 = in(uVar35);
      *puVar49 = uVar14;
      *(byte *)((int)puVar43 + 0x6e) = *(byte *)((int)puVar43 + 0x6e) + cVar12;
      puVar49 = (undefined1 *)segment(in_ES,sVar15 + 1);
      uVar14 = in(uVar35);
      *puVar49 = uVar14;
      puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),sVar15 + 2);
code_r0x008f4aac:
      *(byte *)((int)puVar43 + 0x6e) = *(byte *)((int)puVar43 + 0x6e) + (char)((uint)puVar19 >> 8);
      puVar49 = (undefined1 *)segment(in_ES,(short)puVar47);
      puVar46 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),(short)puVar47 + 1);
      uVar14 = in(uVar35);
      *puVar49 = uVar14;
      puVar49 = (undefined1 *)(puVar18[0x1a] * 0x6972742d);
      out(*puVar49,uVar35);
      pbVar17 = puVar49 + 5;
      out(*(undefined4 *)(puVar49 + 1),uVar35);
      goto code_r0x008f4acc;
    }
    sVar15 = -((ushort)*param_28 & 3);
    bVar54 = 0 < sVar15;
    *(ushort *)param_28 = (short)*param_28 + (ushort)bVar54 * sVar15;
    bVar51 = false;
    bVar53 = false;
code_r0x008f4810:
    puVar18 = param_37;
    puVar19 = param_35;
    puVar26 = param_34;
    puVar43 = param_32;
    puVar47 = param_31;
    puVar50 = param_30;
    if (bVar54) {
code_r0x008f4813:
      uVar33 = SUB42(puVar19,0);
      *(byte *)((int)puVar43 + 0x73) = *(byte *)((int)puVar43 + 0x73) + (char)((uint)puVar19 >> 8);
      bVar55 = (byte)puVar18;
      bVar51 = CARRY1((byte)*puVar18,bVar55);
      bVar53 = SCARRY1((byte)*puVar18,bVar55);
      *(byte *)puVar18 = (byte)*puVar18 + bVar55;
      if ((byte)*puVar18 == 0) {
        bVar51 = CARRY1((byte)*puVar18,bVar55);
        *(byte *)puVar18 = (byte)*puVar18 + bVar55;
        bVar11 = (byte)*puVar18;
        goto code_r0x008f481c;
      }
    }
    bVar54 = false;
    puVar45 = (undefined4 *)CONCAT22(param_40._2_2_,param_40._0_2_);
    puVar49 = (undefined1 *)CONCAT22(param_41._2_2_,param_41._0_2_);
    puVar19 = (uint *)CONCAT22(param_47._2_2_,param_47._0_2_);
    if (!bVar51) {
      bVar54 = false;
code_r0x008f48ec:
      if (bVar54) {
        puVar47 = (uint *)((int)puVar45 + 1);
        uVar14 = in(param_45._0_2_);
        *(undefined1 *)puVar45 = uVar14;
        puVar26 = param_46;
        puVar37 = param_45;
        puVar18 = param_44;
        puVar43 = param_42;
        goto code_r0x008f4954;
      }
      uVar4 = in(param_45._0_2_);
      *puVar45 = uVar4;
      goto code_r0x008f48f6;
    }
    puVar18 = param_46;
    puVar26 = param_45;
    puVar47 = param_44;
    if (!bVar53) goto code_r0x008f48eb;
code_r0x008f494c:
    sVar15 = -((ushort)*puVar18 & 3);
    *(ushort *)puVar18 = (short)*puVar18 + (ushort)(0 < sVar15) * sVar15;
    *(byte *)(puVar47 + 0x1c) = (byte)puVar47[0x1c] + (char)((uint)puVar26 >> 8);
    out((byte)*param_49,param_53._0_2_);
    puVar19 = param_55;
    puVar26 = (uint *)CONCAT22(param_54._2_2_,param_54._0_2_);
    puVar37 = param_53;
    puVar18 = param_52;
    puVar43 = param_50;
    puVar47 = param_48;
code_r0x008f4954:
    uVar22 = puVar18[0x1a];
    out(*(undefined4 *)(uVar22 * 0x6c6f632d),(short)puVar37);
    puVar46 = puVar47 + 1;
    uVar44 = in((short)puVar37);
    *puVar47 = uVar44;
    bVar55 = (byte)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar55;
    uVar44 = *puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar55;
    pcVar16 = (char *)((undefined4 *)(uVar22 * 0x6c6f632d) + 1);
    if (CARRY1((byte)uVar44,bVar55)) {
      out(*(undefined1 *)CONCAT22(param_31._2_2_,param_31._0_2_),param_35._0_2_);
      puVar18 = param_37;
      puVar26 = param_34;
      puVar50 = param_30;
      uVar33 = param_35._0_2_;
code_r0x008f496f:
      bVar55 = in(uVar33);
      *(byte *)puVar50 = bVar55;
      *(byte *)(in_GS_OFFSET + (int)puVar18) =
           *(byte *)(in_GS_OFFSET + (int)puVar18) + (char)puVar18;
      puVar26 = puVar26 + 0x1c;
      *(byte *)puVar26 = (byte)*puVar26 + (char)((ushort)uVar33 >> 8);
      bVar51 = (byte)*puVar26 == 0;
      goto code_r0x008f4976;
    }
code_r0x008f49d6:
    uVar44 = *puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
    uVar35 = SUB42(puVar37,0);
    out(*pcVar16,uVar35);
    pbVar17 = (byte *)(pcVar16 + 5);
    out(*(undefined4 *)(pcVar16 + 1),uVar35);
    bVar51 = true;
    if (CARRY1((byte)uVar44,(byte)puVar19)) goto code_r0x008f4a53;
    segment(in_GS,(short)puVar18 + (short)puVar46 + 0x6e);
    bVar51 = false;
    if ((byte)*puVar19 == 0) {
      out(*pbVar17,uVar35);
      goto code_r0x008f4a49;
    }
code_r0x008f49e7:
    pbVar38 = (byte *)((int)puVar46 + 1);
    uVar35 = SUB42(puVar37,0);
    bVar55 = in(uVar35);
    *(byte *)puVar46 = bVar55;
    if ((longlong)(int)&stack0x00000198 != (longlong)*(int *)((int)puVar26 + 0x6e) * 0x6977732d) {
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      *(byte *)((int)puVar26 + 0x72) = *(byte *)((int)puVar26 + 0x72) + (char)((uint)puVar26 >> 8);
      bVar55 = in(uVar35);
      *pbVar38 = bVar55;
      goto code_r0x008f49fe;
    }
code_r0x008f4a64:
    puVar18 = param_37;
    puVar47 = param_36;
    puVar37 = param_32;
    puVar27 = param_30;
    uVar33 = param_35._0_2_;
    if (bVar51) {
      uVar4 = in(uVar35);
      *(undefined4 *)pbVar38 = uVar4;
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      pbVar17[0x72] = pbVar17[0x72] + (char)((uint)puVar19 >> 8);
      out(*pbVar17,uVar35);
      puVar2 = (ushort *)((int)puVar19 + 0x2d);
      sVar15 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
      puVar2 = (ushort *)((int)puVar26 + 0x6e);
      *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
      goto code_r0x008f4a7a;
    }
code_r0x008f4ae2:
    sVar15 = -((ushort)*puVar47 & 3);
    *(ushort *)puVar47 = (short)*puVar47 + (ushort)(0 < sVar15) * sVar15;
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar12 = (char)((uint)puVar18 >> 8);
    *(byte *)((int)puVar37 + 0x6e) = *(byte *)((int)puVar37 + 0x6e) + cVar12;
    puVar49 = (undefined1 *)segment(in_ES,(short)puVar27);
    uVar14 = in(uVar33);
    *puVar49 = uVar14;
    *(byte *)((int)puVar37 + 0x6e) = *(byte *)((int)puVar37 + 0x6e) + cVar12;
    puVar49 = (undefined1 *)segment(in_ES,(short)puVar27 + 1);
    uVar14 = in(uVar33);
    *puVar49 = uVar14;
    bVar55 = in(param_35._0_2_);
    *(byte *)param_30 = bVar55;
    *(byte *)((int)param_32 + 0x6e) = *(byte *)((int)param_32 + 0x6e) + param_37._1_1_;
    puVar49 = (undefined1 *)segment(in_ES,(ushort)param_30 + 1);
    uVar14 = in(param_35._0_2_);
    *puVar49 = uVar14;
    uVar44 = param_34[0x1a];
    *(byte *)param_37 = (byte)*param_37 + (char)param_37;
    out(*(undefined1 *)(uVar44 * 0x7261632d),param_35._0_2_);
    puVar49 = (undefined1 *)segment(in_ES,(ushort)param_30 + 2);
    uVar14 = in(param_35._0_2_);
    *puVar49 = uVar14;
    *(byte *)((int)param_32 + 0x6e) = *(byte *)((int)param_32 + 0x6e) + param_37._1_1_;
    puVar49 = (undefined1 *)segment(in_ES,(ushort)param_30 + 3);
    uVar14 = in(param_35._0_2_);
    *puVar49 = uVar14;
    puVar49 = (undefined1 *)segment(in_ES,0);
    puVar27 = (uint *)0x1;
    uVar14 = in(param_35._0_2_);
    *puVar49 = uVar14;
    puVar47 = param_37;
    puVar26 = param_36;
    puVar18 = param_34;
    puVar43 = param_32;
    uVar35 = param_35._0_2_;
code_r0x008f4b4b:
    pbVar17 = (byte *)((int)puVar43 + 0x6e);
    *pbVar17 = *pbVar17 + (char)((uint)puVar47 >> 8);
    bVar51 = *pbVar17 == 0;
    puVar49 = (undefined1 *)segment(in_ES,(short)puVar27);
    uVar14 = in(uVar35);
    *puVar49 = uVar14;
    puVar49 = (undefined1 *)((longlong)(int)puVar18[0x1a] * 0x656d612d);
    if ((longlong)(int)puVar49 != (longlong)(int)puVar18[0x1a] * 0x656d612d) {
      param_29._0_2_ = 0x69;
      param_29._2_1_ = 99;
      param_29._3_1_ = 0x68;
      param_28._0_2_ = 0x6300;
      param_28._2_2_ = 0x6e61;
      goto code_r0x008f4bd3;
    }
    puVar2 = (ushort *)((int)puVar26 + 0x6e);
    *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
    cVar12 = (char)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + cVar12;
    *(byte *)puVar47 = (byte)*puVar47 + cVar12;
    if ((byte)*puVar47 != 0) {
      out(*puVar49,uVar35);
      *(byte *)puVar47 = (byte)*puVar47 + cVar12;
      *(byte *)puVar47 = (byte)*puVar47 + cVar12;
      bVar51 = (byte)*puVar47 == 0;
      goto code_r0x008f4bd3;
    }
    puVar2 = (ushort *)((int)puVar47 + 0x2d);
    sVar15 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    segment(in_DS,(short)puVar18 + (short)puVar27 + 0x6f);
    lVar5 = (longlong)*(int *)((int)puVar26 + (int)puVar43 * 2 + 0x6f) * 0x6c616e;
    puVar49 = (undefined1 *)lVar5;
    puVar2 = (ushort *)((int)puVar47 + -0x6461720b);
    sVar15 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    out(*puVar49,uVar35);
    if ((int)puVar49 == lVar5) {
      uRam73656e69 = in(param_13._2_2_);
      goto code_r0x008f4be9;
    }
    puVar27 = (uint *)0x73656e69;
    puVar49 = (undefined1 *)CONCAT22(param_10._0_2_,param_9._2_2_);
    puVar18 = (uint *)CONCAT22(param_13._0_2_,param_12._2_2_);
    puVar26 = (uint *)CONCAT22((ushort)param_15,param_14._2_2_);
    puVar19 = (uint *)CONCAT22(param_16._0_2_,param_15._2_2_);
    bVar55 = (byte)((uint)param_15 >> 0x10);
    if (SBORROW4((int)(puVar47 + -0x19185c9d),0x676e6973)) {
      *(byte *)puVar19 = (byte)*puVar19 + bVar55;
    }
    else {
      if ((uint *)0x676e6972 < puVar47 + -0x19185c9d) {
        *(byte *)puVar19 = (byte)*puVar19 + bVar55;
        *(byte *)(puVar18 + 0x1a) = (byte)puVar18[0x1a] + (char)((uint)param_15 >> 0x18);
        puVar47 = puVar19 + -0x80400;
        bVar51 = CARRY1((byte)*puVar47,bVar55);
        *(byte *)puVar47 = (byte)*puVar47 + bVar55;
        puVar2 = (ushort *)((int)puVar19 + 0x69);
        *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
        uVar35 = param_13._2_2_;
        goto code_r0x008f4baf;
      }
      out(*puVar49,param_13._2_2_);
      puVar3 = (undefined1 *)segment(in_ES,0x6e69);
      uVar14 = in(param_13._2_2_);
      *puVar3 = uVar14;
    }
code_r0x008f4bf5:
    puVar2 = (ushort *)((int)puVar26 + 0x6e);
    sVar15 = ((short)&param_24 + 2U & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    uVar4 = in(CONCAT11(param_29._3_1_,param_29._2_1_));
    *(undefined4 *)CONCAT22(param_25._0_2_,param_24._2_2_) = uVar4;
    puVar2 = (ushort *)(CONCAT22(param_31._0_2_,param_30._2_2_) + 0x6e);
    *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
    pbVar17 = (byte *)(CONCAT22(param_27._0_2_,param_26._2_2_) + 0x6e);
    *pbVar17 = *pbVar17 & (byte)((ushort)param_31._2_2_ >> 8);
    puVar3 = (undefined1 *)segment(in_ES,param_24._2_2_ + 4);
    uVar14 = in(CONCAT11(param_29._3_1_,param_29._2_1_));
    *puVar3 = uVar14;
s_american_008f4c18:
    uVar44 = in(param_35._0_2_);
    *param_30 = uVar44;
    puVar2 = (ushort *)((int)param_36 + 0x6e);
    *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
    *(byte *)param_37 = (byte)*param_37 + (char)param_37;
    *(byte *)param_37 = (byte)*param_37 + (char)param_37;
    *(byte *)((int)param_36 + 0x43) = *(byte *)((int)param_36 + 0x43) + (char)param_37;
    *(byte *)param_37 = (byte)*param_37 + (char)param_37;
    *(byte *)param_37 = (byte)*param_37 + (char)param_37;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_EAX = (byte)*in_EAX + bVar11;
  *(byte *)in_EAX = (byte)*in_EAX + bVar11;
  out(*unaff_ESI,uVar30);
  uVar14 = in(uVar30);
  *unaff_EDI = uVar14;
  out(unaff_ESI[1],uVar30);
  uVar4 = in(uVar30);
  *(undefined4 *)(unaff_EDI + 1) = uVar4;
  *(byte *)in_EAX = (byte)*in_EAX + bVar11;
  bVar51 = CARRY1((byte)*in_EAX,bVar11);
  *(byte *)in_EAX = (byte)*in_EAX + bVar11;
  puVar45 = (undefined4 *)((int)unaff_ESI + 9);
  out(*(undefined1 *)(unaff_ESI + 2),uVar30);
  puVar18 = in_EAX;
  puVar43 = (uint *)(unaff_EBX + 1);
  puVar50 = (uint *)(unaff_EDI + 5);
  if ((POPCOUNT((byte)*in_EAX) & 1U) != 0) {
    bVar11 = in(uVar30);
    unaff_EDI[5] = bVar11;
    cVar12 = (char)param_7;
    *param_7 = *param_7 + cVar12;
    pcVar16 = (char *)((int)unaff_ESI + unaff_retaddr * 2 + 0x75);
    *pcVar16 = *pcVar16 + cVar12;
    lVar5 = (longlong)*(int *)((int)in_EAX + 0x69) * 0x206e6163;
    if ((int)lVar5 == lVar5) {
      *param_7 = *param_7 + cVar12;
      bVar51 = *param_7 == '\0';
      param_6 = param_4;
      out(*in_EAX,(short)param_5);
      if (!bVar51) goto code_r0x008f4680;
      pcRamfffffffc = param_7;
      out(*puRam00000000,(short)uRam00000010);
      uVar4 = in((short)uRam00000030);
      *puRam0000001c = uVar4;
      puVar18 = puRam00000058;
      param_1 = puRam00000054;
      param_2 = puRam00000050;
      puVar43 = puRam0000004c;
      puVar37 = puRam00000044;
      iVar36 = iRam00000040;
      puVar26 = puRam0000003c;
      *(byte *)puRam00000058 = (byte)*puRam00000058 + (char)puRam00000058;
      pbVar17 = (byte *)((int)puVar37 + 0x65);
      *pbVar17 = *pbVar17 + (char)param_1;
      if (-1 < (char)*pbVar17) {
        sVar15 = ((ushort)puVar37 & 3) - ((ushort)*puVar26 & 3);
        *(ushort *)puVar26 = (short)*puVar26 + (ushort)(0 < sVar15) * sVar15;
        puVar43 = puVar43 + 0x1c;
        *(byte *)puVar43 = (byte)*puVar43 + (byte)param_2;
        bVar53 = (byte)*puVar43 == 0;
        goto code_r0x008f46a6;
      }
      pbVar17 = (byte *)((int)param_2 + iVar36 * 2 + 0x61);
      *pbVar17 = *pbVar17 & (byte)param_2;
      goto code_r0x008f470d;
    }
    bVar51 = *pcVar16 == '\0';
    puVar49 = (undefined1 *)segment(in_ES,(short)(unaff_ESI + 2));
    uVar14 = in((short)param_5);
    *puVar49 = uVar14;
code_r0x008f4680:
    param_7 = param_5;
    bVar53 = true;
    if (bVar51) goto code_r0x008f46fb;
    puVar41 = (undefined4 *)(*puVar26 * 0x6d726547);
    puVar49 = (undefined1 *)*puVar41;
    iVar36 = puVar41[5];
    pcVar16 = (char *)puVar41[7];
    out(*(undefined1 *)puVar41[1],(short)iVar36);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    iVar36 = iVar36 + 1;
    bVar53 = iVar36 == 0;
    uVar14 = in((short)iVar36);
    *puVar49 = uVar14;
    segment(in_DS,(short)puVar49 + 0x6e);
code_r0x008f46a6:
    param_7 = param_5;
    out((byte)*param_35,(short)param_39);
    puVar46 = (uint *)((longlong)(int)puVar27[0x1a] * 0x73614200);
    puVar18 = param_41;
    param_1 = param_40;
    param_2 = param_39;
    puVar43 = puVar27;
    puVar37 = param_36;
    puVar26 = param_34;
    if ((longlong)(int)puVar46 == (longlong)(int)puVar27[0x1a] * 0x73614200) goto code_r0x008f4726;
    pbVar17 = (byte *)(in_GS_OFFSET + (int)param_41);
    bVar11 = *pbVar17;
    bVar10 = (byte)param_41;
    *pbVar17 = *pbVar17 + bVar10;
    bVar51 = *pbVar17 == 0;
    param_41._2_2_ = param_38._2_2_;
    puVar18 = puVar47;
    param_41._0_2_ = uVar33;
    if (CARRY1(bVar11,bVar10) || bVar51) {
      out((byte)*puVar46,(short)param_39);
      bVar51 = CARRY1((byte)*puVar47,bVar10);
      *(byte *)puVar47 = (byte)*puVar47 + bVar10;
      bVar11 = (byte)*puVar47;
      puVar46 = (uint *)((int)puVar46 + 1);
      goto code_r0x008f46bc;
    }
code_r0x008f471c:
    puVar47 = param_42;
    uVar33 = param_46._0_2_;
    if (bVar51) {
      puVar46 = (uint *)(puVar37[0x19] * 0x6174732d);
      bVar53 = true;
code_r0x008f4726:
      uVar33 = SUB42(param_2,0);
      puVar47 = puVar46;
      if (bVar53) goto code_r0x008f478d;
      bVar11 = (byte)puVar18;
      bVar51 = CARRY1((byte)*puVar18,bVar11);
      bVar53 = SCARRY1((byte)*puVar18,bVar11);
      *(byte *)puVar18 = (byte)*puVar18 + bVar11;
      if ((byte)*puVar18 == 0) {
        sVar15 = (short)(puVar37[0x19] * 0x6e696b2d);
        puVar45 = (undefined4 *)segment(in_FS,sVar15);
        puVar47 = (uint *)CONCAT22((short)(puVar37[0x19] * 0x6e696b2d >> 0x10),sVar15 + 4);
        out(*puVar45,uVar33);
        puVar50 = puVar26 + 1;
        uVar44 = in(uVar33);
        *puVar26 = uVar44;
        *(byte *)puVar18 = (byte)*puVar18 + bVar11;
        bVar51 = (byte)*puVar18 == 0;
        goto code_r0x008f473c;
      }
      bVar54 = false;
      if (!bVar53) goto code_r0x008f479e;
      goto code_r0x008f4810;
    }
code_r0x008f478d:
    out(*puVar47,uVar33);
    cRam909c9700 = cRam909c9700 + (char)((ushort)uVar33 >> 8);
code_r0x008f479e:
    puVar50 = (uint *)CONCAT22(param_40._2_2_,param_40._0_2_);
    puVar47 = (uint *)CONCAT22(param_41._2_2_,param_41._0_2_);
    *(byte *)param_47 = (byte)*param_47 + bVar8;
    bVar51 = CARRY1((byte)*param_47,bVar8);
    uVar44 = *param_47;
    *(byte *)param_47 = (byte)*param_47 + bVar8;
    bVar11 = (byte)*param_47;
    puVar18 = param_47;
    param_2 = param_45;
    puVar26 = param_44;
    puVar43 = param_44;
    bVar10 = bVar55;
    uVar33 = param_45._0_2_;
    if (!SCARRY1((byte)uVar44,bVar8)) goto code_r0x008f47aa;
code_r0x008f481c:
    bVar53 = bVar11 == 0;
    if (!bVar51) goto code_r0x008f48ff;
    lVar5 = (longlong)*(int *)((int)puVar26 + 0x73) * 0x73000000;
    puVar47 = (uint *)lVar5;
    if ((int)puVar47 != lVar5 || bVar53) goto code_r0x008f482f;
    bVar55 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar55;
    uVar44 = *puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar55;
    bVar53 = (byte)*puVar18 == 0;
    if (!CARRY1((byte)uVar44,bVar55)) {
      in_stack_00000158 = (uint *)0x206c652d;
      goto code_r0x008f48ff;
    }
    out((byte)*param_49,param_53._0_2_);
    uVar44 = in(uVar31);
    *param_56 = uVar44;
    bVar55 = *param_71;
    *param_71 = *param_71 + (byte)param_71;
    if (CARRY1(bVar55,(byte)param_71)) {
      out(*param_73,(short)param_77);
      lVar5 = (longlong)*(int *)(param_76 + 0x68) * 0x63696e2d;
      cVar12 = (char)((uint)in_stack_0000014c >> 8);
      if ((int)lVar5 == lVar5) {
        if (*param_71 == 0) {
          *in_stack_00000154 = *in_stack_00000154 + (char)in_stack_00000154;
          *(char *)(in_stack_00000148 + 0x70) = *(char *)(in_stack_00000148 + 0x70) + cVar12;
          puVar19 = in_stack_00000174;
          puVar26 = in_stack_00000170;
          puVar37 = in_stack_0000016c;
          puVar18 = in_stack_00000168;
          puVar43 = in_stack_00000160;
          puVar46 = in_stack_0000015c;
          puVar47 = in_stack_00000158;
          goto code_r0x008f48b7;
        }
      }
      else {
        *(char *)(in_stack_00000148 + 0x70) = *(char *)(in_stack_00000148 + 0x70) + cVar12;
      }
    }
code_r0x008f4912:
    out((byte)*in_stack_0000015c,(short)in_stack_0000016c);
    puVar48 = in_stack_0000017c + 1;
    out(*in_stack_0000017c,uVar34);
    uVar35 = uVar34;
    if ((longlong)(int)((longlong)(int)in_stack_00000168[0x1a] * 0x7563652d) !=
        (longlong)(int)in_stack_00000168[0x1a] * 0x7563652d) {
      out((byte)*in_stack_0000019c,uVar32);
      puVar48 = (undefined4 *)(in_stack_000001a8[0x1a] * 0x6d6f642d);
      lVar5 = (longlong)*(int *)((int)puVar48 + 0x69) * 0x206e6163;
      puVar43 = (uint *)lVar5;
      puVar19 = in_stack_000001b4;
      puVar26 = in_stack_000001b0;
      puVar37 = in_stack_000001ac;
      puVar18 = in_stack_000001a8;
      puVar47 = in_stack_00000198;
      uVar35 = uVar32;
      if ((int)puVar43 == lVar5) goto code_r0x008f4936;
    }
    uVar34 = uVar35;
    puVar45 = puVar48 + 1;
    out(*puVar48,uVar34);
code_r0x008f4993:
    out(*(undefined1 *)puVar45,uVar34);
    bVar55 = (byte)in_stack_000001b4;
    *(byte *)in_stack_000001b4 = (byte)*in_stack_000001b4 + bVar55;
    pbVar17 = (byte *)((int)in_stack_000001b4 + 0x6f);
    bVar11 = (byte)((uint)in_stack_000001ac >> 8);
    bVar51 = CARRY1(*pbVar17,bVar11);
    *pbVar17 = *pbVar17 + bVar11;
    if (!bVar51) {
      if (*pbVar17 != 0) goto code_r0x008f4a05;
      uVar44 = in(uVar32);
      *in_stack_00000198 = uVar44;
      goto code_r0x008f4a08;
    }
    *(byte *)in_stack_000001b4 = (byte)*in_stack_000001b4 + bVar55;
    uVar44 = *in_stack_000001b4;
    *(byte *)in_stack_000001b4 = (byte)*in_stack_000001b4 + bVar55;
    puVar18 = in_stack_000001b4;
    if (CARRY1((byte)uVar44,bVar55)) goto code_r0x008f4a85;
code_r0x008f4a18:
    out((byte)*param_24,param_28._0_2_);
    puVar19 = param_30 + -0x195e1d5b;
    puVar47 = (uint *)(param_23 + 4);
    uVar4 = in(param_28._0_2_);
    *(undefined4 *)param_23 = uVar4;
    if (param_30 < (uint *)0x6578756c) {
      puVar47 = (uint *)CONCAT22(param_31._2_2_,param_31._0_2_);
      out((byte)*param_32,param_36._0_2_);
      *(byte *)puVar27 = (byte)*puVar27 + bVar13;
      out(*(byte *)((int)param_32 + 1),param_36._0_2_);
      puVar26 = param_37;
      puVar37 = param_36;
      puVar18 = param_35;
      puVar43 = param_33;
      goto code_r0x008f4a8a;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    pbVar17 = (byte *)(param_23 + 0x69);
    bVar55 = *pbVar17;
    bVar11 = (byte)((uint)puVar19 >> 8);
    *pbVar17 = *pbVar17 + bVar11;
    puVar26 = param_29;
    puVar18 = param_27;
    puVar43 = param_25;
    uVar35 = param_28._0_2_;
    if (!CARRY1(bVar55,bVar11)) {
code_r0x008f4a2c:
      puVar47 = (uint *)CONCAT22(param_31._2_2_,param_31._0_2_);
      pbVar17 = (byte *)((int)param_32 + 1);
      out((byte)*param_32,param_36._0_2_);
      bVar53 = puVar27 < (uint *)0x6863696c;
      puVar19 = puVar27 + -0x1a18da5b;
      bVar51 = puVar19 == (uint *)0x0;
      puVar26 = param_37;
      puVar18 = param_35;
      puVar43 = param_33;
      uVar35 = param_36._0_2_;
code_r0x008f4a33:
      if (!bVar51) {
        out(*pbVar17,uVar35);
        if (bVar53) goto code_r0x008f4a38;
        goto code_r0x008f4aac;
      }
      puVar19 = param_46;
      puVar26 = param_45;
      puVar18 = param_43;
      puVar43 = (uint *)CONCAT22(param_41._2_2_,param_41._0_2_);
      puVar47 = param_39;
      uVar35 = param_44._0_2_;
    }
    goto code_r0x008f4a9b;
  }
code_r0x008f4663:
  out(*puVar45,(short)param_2);
  bVar11 = (byte)puVar18;
  if (!bVar51) {
    *(byte *)((int)puVar43 + 0x6f) = *(byte *)((int)puVar43 + 0x6f) & (byte)param_2;
    *(byte *)puVar18 = (byte)*puVar18 + bVar11;
    pbVar17 = (byte *)((int)param_1 + 0x75);
    bVar10 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar11;
    if (CARRY1(bVar10,bVar11)) {
      *(char *)((int)puVar45 + 0x76) = *(char *)((int)puVar45 + 0x76) + bVar11;
      goto code_r0x008f46bf;
    }
    bVar53 = puVar45 == (undefined4 *)0xfffffffa;
    param_6 = puVar43;
    if ((longlong)(int)((longlong)(int)puVar45[0x1d] * 0x687369) ==
        (longlong)(int)puVar45[0x1d] * 0x687369) goto code_r0x008f46fb;
code_r0x008f475e:
    if (bVar53) {
      param_54._0_2_ = 0x612d;
      param_54._2_2_ = 0x7266;
      *(byte *)((int)param_2 + 0x72) = *(byte *)((int)param_2 + 0x72) & (byte)((uint)puVar18 >> 8);
      out(*(undefined1 *)(*(int *)((int)param_1 + 0x69) * 0x6e),(short)param_2);
code_r0x008f47ea:
      puVar49 = (undefined1 *)segment(in_ES,(short)puVar50);
      uVar14 = in((short)param_2);
      *puVar49 = uVar14;
      puVar47 = (uint *)(param_15 + 1);
      out(*param_15,(short)param_19);
      puVar19 = param_21;
      param_2 = param_19;
      puVar43 = param_18;
      puVar37 = param_16;
      goto code_r0x008f47ee;
    }
code_r0x008f47d4:
    out((byte)*param_56,(short)param_60);
    pbVar17 = (byte *)((int)User32Reserved + (int)((int)param_55 + 0x2e));
    *pbVar17 = *pbVar17 + (char)((uint)param_62 >> 8);
    param_2 = param_68;
    puVar50 = param_63;
    if (*pbVar17 != 0) goto code_r0x008f47ea;
    *(byte *)param_70 = (byte)*param_70 + (char)param_70;
    puVar18 = param_68;
    puVar26 = param_65;
    puVar19 = param_64;
    puVar47 = param_63;
    if ((byte)*param_70 != 0) {
      puVar18 = param_70;
      puVar19 = param_68;
      puVar26 = param_67;
      puVar43 = (uint *)(*param_64 * 0x72656d61);
      puVar47 = param_64;
      goto code_r0x008f4813;
    }
code_r0x008f4866:
    *(byte *)((int)puVar18 + 0x69) = *(byte *)((int)puVar18 + 0x69) & (byte)((uint)puVar18 >> 8);
    sVar15 = ((ushort)puVar26 & 3) - ((ushort)*puVar47 & 3);
    bVar51 = 0 < sVar15;
    *(ushort *)puVar47 = (short)*puVar47 + (ushort)bVar51 * sVar15;
    out((byte)*puVar19,(short)puVar18);
code_r0x008f48c6:
    out((byte)*param_32,param_36._0_2_);
    out((byte)*param_25,param_29._0_2_);
    puVar19 = (uint *)CONCAT22(param_31._2_2_,param_31._0_2_);
    puVar26 = param_30;
    puVar37 = param_29;
    puVar18 = param_28;
    puVar43 = param_26;
    puVar47 = param_24;
    if (bVar51) {
code_r0x008f48e2:
      *(byte *)param_39 = (byte)*param_39 + (byte)param_39;
      puVar18 = param_36 + 0x1c;
      *(byte *)puVar18 = (byte)*puVar18 + param_37._1_1_;
      bVar54 = (byte)*puVar18 == 0;
      puVar45 = (undefined4 *)CONCAT22(param_40._2_2_,param_40._0_2_);
      puVar49 = (undefined1 *)CONCAT22(param_41._2_2_,param_41._0_2_);
      puVar19 = (uint *)CONCAT22(param_47._2_2_,param_47._0_2_);
code_r0x008f48eb:
      out(*puVar49,param_45._0_2_);
      goto code_r0x008f48ec;
    }
    goto code_r0x008f4954;
  }
  uVar44 = *puVar18;
  *(byte *)puVar18 = (byte)*puVar18 + bVar11;
  puVar47 = (uint *)((int)puVar45 + 5);
  bVar51 = puVar47 == (uint *)0x0;
  if (!CARRY1((byte)uVar44,bVar11)) goto code_r0x008f46db;
code_r0x008f473c:
  bVar10 = (byte)((uint)param_1 >> 8);
  if (!bVar51) {
    pbVar17 = (byte *)((int)puVar50 + (*(int *)((int)puVar47 + 0x69) * 0x20646164 + 0x31) * 2);
    *pbVar17 = *pbVar17 & (byte)((uint)param_2 >> 8);
    puVar48 = (undefined4 *)CONCAT22(param_40._2_2_,param_40._0_2_);
    puVar45 = (undefined4 *)segment(in_DS,param_41._0_2_);
    out(*puVar45,param_45._0_2_);
    *(byte *)param_47 = (byte)*param_47 + bVar8;
    pbVar17 = (byte *)((int)param_44 + 0x6f);
    *pbVar17 = *pbVar17 + (char)((uint)param_45 >> 8);
    puVar18 = param_47;
    uVar33 = param_45._0_2_;
    if (*pbVar17 == 0) {
      param_47._0_2_ = 0x6b2d;
      param_47._2_2_ = 0x726f;
      puVar50 = (uint *)0x726f6b2d;
      pbVar17 = (byte *)((int)param_51 + 0x6f);
      *pbVar17 = *pbVar17 + (char)((uint)param_52 >> 8);
      bVar53 = *pbVar17 == 0;
      puVar18 = param_54;
      param_1 = param_53;
      param_2 = param_52;
      goto code_r0x008f475e;
    }
code_r0x008f47cd:
    pbVar17 = (byte *)((int)puVar18 + -0x676e6f6b);
    *pbVar17 = *pbVar17 + (char)pbVar17;
    *(byte *)(puVar18 + -0x19db9bbf) = (byte)puVar18[-0x19db9bbf] + bVar55;
    uVar14 = in(uVar33);
    *(undefined1 *)puVar48 = uVar14;
    uVar14 = in(uVar33);
    *(undefined1 *)((int)puVar48 + 1) = uVar14;
    goto code_r0x008f47d4;
  }
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
code_r0x008f47aa:
  *(byte *)(puVar43 + 0x1a) = (byte)puVar43[0x1a] & (byte)((uint)puVar18 >> 8);
  uVar33 = SUB42(param_2,0);
  out((byte)*puVar47,uVar33);
  pbVar17 = (byte *)((int)puVar47 + 0x66);
  bVar55 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar10;
  if (!CARRY1(bVar55,bVar10) && *pbVar17 != 0) {
    out(*(byte *)((int)puVar47 + 1),uVar33);
    goto code_r0x008f47ea;
  }
  if ((POPCOUNT(*pbVar17) & 1U) != 0) {
    bVar55 = in((short)param_19);
    *(byte *)param_14 = bVar55;
    bVar55 = (byte)((uint)param_28 >> 8);
    out(*param_23,param_27._0_2_);
    pbVar17 = (byte *)((int)User32Reserved + (int)((int)param_29 + 0x2b));
    *pbVar17 = *pbVar17 + bVar55;
    out(param_23[1],param_27._0_2_);
    puVar48 = param_22;
    puVar18 = param_29;
    uVar33 = param_27._0_2_;
    goto code_r0x008f47cd;
  }
  *(byte *)((int)puVar43 + 0x77) = *(byte *)((int)puVar43 + 0x77) + (char)((uint)param_2 >> 8);
code_r0x008f482f:
  bVar55 = in(uVar33);
  *(byte *)puVar50 = bVar55;
  out((byte)*param_49,param_53._0_2_);
  pbVar17 = (byte *)((int)User32Reserved + (int)(param_52 + 0xb));
  *pbVar17 = *pbVar17 + (char)((uint)param_53 >> 8);
  out(*param_57,uVar31);
  puVar19 = param_63;
  puVar26 = param_62;
  puVar37 = param_61;
  puVar18 = param_60;
  puVar43 = param_58;
  puVar46 = (uint *)(param_60[0x1a] * 0x6e65762d);
  puVar47 = param_56;
  if ((POPCOUNT(*pbVar17) & 1U) != 0) {
    bVar55 = in(uVar31);
    *(byte *)param_56 = bVar55;
    *param_23 = *param_23 + (char)param_23;
    param_20 = param_20 + 0x1c;
    *(byte *)param_20 = (byte)*param_20 + (char)((uint)param_21 >> 8);
    bVar51 = (byte)*param_20 == 0;
    out((byte)*param_25,param_29._0_2_);
    puVar46 = (uint *)((longlong)(int)param_28[0x1a] * 0x7572752d);
    puVar19 = param_31;
    puVar26 = param_30;
    puVar37 = param_29;
    puVar18 = param_28;
    puVar43 = param_26;
    puVar47 = param_24;
    if (!bVar51) goto code_r0x008f48b7;
    if ((longlong)(int)puVar46 == (longlong)(int)param_28[0x1a] * 0x7572752d) {
      param_31._0_2_ = 0x6d2d;
      param_31._2_2_ = 0x7865;
      goto code_r0x008f48c6;
    }
    out((byte)*param_33,uVar35);
    puVar45 = (undefined4 *)((longlong)(int)param_36[0x1a] * 0x6575702d);
    if ((longlong)(int)puVar45 == (longlong)(int)param_36[0x1a] * 0x6575702d) {
      out(*puVar45,uVar35);
      puVar18 = param_37;
      puVar26 = param_34;
      puVar19 = puVar45 + 1;
      puVar47 = param_31;
      goto code_r0x008f4866;
    }
    puVar19 = param_39 + -0x191b9bda;
    puVar26 = puVar27;
    puVar37 = param_37;
    puVar18 = param_36;
    puVar43 = param_34;
    puVar47 = param_31;
    if (puVar19 == (uint *)0x0) goto code_r0x008f48e2;
    goto code_r0x008f4954;
  }
code_r0x008f48b7:
  out((byte)*puVar46,(short)puVar37);
  puVar45 = (undefined4 *)((longlong)(int)puVar18[0x1a] * 0x646f6d2d);
  if ((longlong)(int)puVar45 == (longlong)(int)puVar18[0x1a] * 0x646f6d2d) {
    uVar44 = *puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
    bVar51 = (byte)*puVar19 == 0;
    puVar48 = puVar45;
    if (CARRY1((byte)uVar44,(byte)puVar19)) goto code_r0x008f48c6;
  }
  else {
    puVar48 = (undefined4 *)((int)puVar45 + 1);
    out(*(undefined1 *)puVar45,(short)puVar37);
    *(byte *)((int)puVar37 + 0x65) = *(byte *)((int)puVar37 + 0x65) & (byte)((uint)puVar37 >> 8);
  }
code_r0x008f4936:
  uVar44 = *puVar19;
  *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
  uVar35 = (short)puVar37;
  if (CARRY1((byte)uVar44,(byte)puVar19)) {
    out((byte)*param_32,param_36._0_2_);
    if ((byte)*puVar19 != 0) {
      *(byte *)((int)param_36 + 0x69) =
           *(byte *)((int)param_36 + 0x69) & (byte)((uint)param_36 >> 8);
      puVar18 = param_37;
      puVar26 = param_36;
      puVar47 = param_35;
      goto code_r0x008f494c;
    }
    puVar43 = (uint *)CONCAT22(param_41._2_2_,param_41._0_2_);
    puVar48 = (undefined4 *)((undefined1 *)CONCAT22(param_40._2_2_,param_40._0_2_) + 1);
    out(*(undefined1 *)CONCAT22(param_40._2_2_,param_40._0_2_),param_44._0_2_);
    *(byte *)param_46 = (byte)*param_46 + (char)param_46;
    puVar19 = param_46;
    puVar26 = param_45;
    puVar18 = param_43;
    puVar47 = param_48;
    uVar35 = param_44._0_2_;
  }
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  out(*(undefined1 *)puVar48,uVar35);
  out(*(undefined4 *)((int)puVar48 + 1),uVar35);
  puVar19 = (uint *)((int)puVar19 + -0x7a617262);
  iVar36 = *(int *)((int)puVar26 + (int)puVar43 * 2 + 0x61);
  pbVar17 = (byte *)(puVar48 + 0x1d);
  bVar55 = *pbVar17;
  bVar11 = (byte)((uint)puVar26 >> 8);
  *pbVar17 = *pbVar17 + bVar11;
  bVar51 = *pbVar17 == 0;
  if (CARRY1(bVar55,bVar11)) {
    uVar44 = in(uVar35);
    *puVar47 = uVar44;
    goto code_r0x008f4a2c;
  }
  piVar1 = (int *)segment(in_GS,(short)puVar18 + (short)puVar47 + 0x6e);
  pbVar17 = (byte *)((int)puVar48 + 9);
  out(*(undefined4 *)((int)puVar48 + 5),uVar35);
  bVar53 = true;
  puVar43 = (uint *)(iVar36 * 0x6e);
  if ((longlong)(int)&param_39 != (longlong)*piVar1 * 0x6e796e2d) goto code_r0x008f4a33;
  pbVar17 = (byte *)(puVar48 + 0x1e);
  bVar55 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar11;
  if (!CARRY1(bVar55,bVar11)) {
    segment(in_GS,(short)puVar18 + (short)puVar47 + 0x6e);
    uVar44 = in(uVar35);
    *puVar47 = uVar44;
    puVar46 = (uint *)((int)param_22 + 1);
    uVar14 = in(param_27._0_2_);
    *(undefined1 *)param_22 = uVar14;
    *(byte *)param_29 = (byte)*param_29 + (char)param_29;
    puVar19 = param_29;
    puVar26 = param_28;
    puVar37 = param_27;
    puVar18 = param_26;
    puVar43 = param_24;
    pcVar16 = param_23;
    goto code_r0x008f49d6;
  }
  uVar44 = in(uVar35);
  *puVar47 = uVar44;
code_r0x008f4a38:
  puVar43 = (uint *)CONCAT22(param_41._2_2_,param_41._0_2_);
  out(*(undefined1 *)CONCAT22(param_40._2_2_,param_40._0_2_),param_44._0_2_);
  puVar19 = (uint *)((int)param_46 + -0x74737561);
  if (param_46 < (uint *)0x74737561) {
    *(byte *)puVar19 = *(byte *)puVar19 + (char)puVar19;
    out(((undefined1 *)CONCAT22(param_40._2_2_,param_40._0_2_))[1],param_44._0_2_);
    puVar26 = param_45;
    puVar18 = param_43;
    puVar47 = param_39;
    uVar35 = param_44._0_2_;
    goto code_r0x008f4aac;
  }
code_r0x008f4a49:
  puVar46 = (uint *)CONCAT22(param_47._2_2_,param_47._0_2_);
  puVar19 = (uint *)CONCAT22(param_54._2_2_,param_54._0_2_);
  out((byte)*param_48,param_52._0_2_);
  pbVar17 = (byte *)((int)param_48 + 0x73);
  bVar55 = (byte)((ushort)param_54._0_2_ >> 8);
  bVar51 = CARRY1(*pbVar17,bVar55);
  *pbVar17 = *pbVar17 + bVar55;
  pbVar17 = (byte *)((int)param_48 + 2);
  out(*(byte *)((int)param_48 + 1),param_52._0_2_);
  puVar2 = (ushort *)((int)puVar19 + 0x2d);
  sVar15 = ((byte)param_49 & 3) - (*puVar2 & 3);
  *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
  puVar26 = param_53;
  puVar18 = param_51;
  puVar43 = param_49;
  uVar35 = param_52._0_2_;
code_r0x008f4a53:
  if (bVar51) {
    pbVar17 = (byte *)0x1;
    out(puRam00000000._0_1_,uVar35);
    puVar2 = (ushort *)((int)puVar19 + 0x2d);
    sVar15 = ((ushort)puVar43 & 3) - (*puVar2 & 3);
    bVar51 = 0 < sVar15;
    *puVar2 = *puVar2 + (ushort)bVar51 * sVar15;
    pbVar38 = (byte *)((int)puVar46 + 1);
    bVar55 = in(uVar35);
    *(byte *)puVar46 = bVar55;
    goto code_r0x008f4a64;
  }
code_r0x008f4acc:
  out(*(undefined4 *)pbVar17,uVar35);
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  pbVar17 = (byte *)((int)puVar43 + 0x6e);
  bVar11 = (byte)((uint)puVar19 >> 8);
  *pbVar17 = *pbVar17 + bVar11;
  bVar55 = *pbVar17;
  puVar49 = (undefined1 *)segment(in_ES,(short)puVar46);
  puVar27 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),(short)puVar46 + 1);
  uVar14 = in(uVar35);
  *puVar49 = uVar14;
  puVar49 = (undefined1 *)((longlong)(int)puVar18[0x1a] * 0x756f732d);
  if (bVar55 != 0) {
    *(byte *)((int)puVar26 + 0x66) = *(byte *)((int)puVar26 + 0x66) & bVar11;
    puVar18 = puVar19;
    puVar47 = puVar26;
    puVar37 = puVar43;
    uVar33 = uVar35;
    goto code_r0x008f4ae2;
  }
  bVar51 = false;
  if ((longlong)(int)puVar49 != (longlong)(int)puVar18[0x1a] * 0x756f732d) {
    puVar47 = (uint *)((int)puVar19 + -0x737561);
    out(*puVar49,uVar35);
    goto code_r0x008f4b4b;
  }
code_r0x008f4baf:
  out(*puVar49,uVar35);
  if (!bVar51) goto s_american_008f4c18;
  puVar47 = puVar19 + -0x19db9bda;
  uVar4 = *(undefined4 *)((int)puVar27 + 0x6e);
  bVar55 = (byte)puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + bVar55;
  uVar44 = *puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + bVar55;
  puVar2 = (ushort *)((int)puVar19 + -0x676e6eff);
  sVar15 = ((short)uVar4 * 0x67 & 3U) - (*puVar2 & 3);
  *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
  out(puVar49[1],uVar35);
  if (!CARRY1((byte)uVar44,bVar55)) {
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(puVar18 + 0x1a) = (byte)puVar18[0x1a] + (char)((uint)puVar47 >> 8);
  puVar2 = (ushort *)((int)puVar26 + 0x6e);
  bVar51 = 0 < (short)-(*puVar2 & 3);
  *puVar2 = *puVar2 + (ushort)bVar51 * -(*puVar2 & 3);
code_r0x008f4bd3:
  segment(in_DS,(short)param_34 + (ushort)param_30 + 0x6e);
  if (!bVar51) {
code_r0x008f4be9:
    puVar26 = (uint *)CONCAT22(param_23._0_2_,param_22._2_2_);
    uVar14 = in(param_21._2_2_);
    *(undefined1 *)CONCAT22((undefined2)param_17,param_16._2_2_) = uVar14;
    if ((longlong)((int)&param_24 + 2) == (longlong)*(int *)((int)puVar26 + 0x6e) * 0x6d610000)
    goto code_r0x008f4bf5;
  }
  pbVar17 = (byte *)CONCAT22(param_24._0_2_,param_23._2_2_);
  bVar55 = *pbVar17;
  bVar11 = (byte)((uint)param_23 >> 0x10);
  *pbVar17 = *pbVar17 + bVar11;
  puVar45 = (undefined4 *)CONCAT22(param_25._0_2_,param_24._2_2_);
  puVar49 = (undefined1 *)CONCAT22(param_26._0_2_,param_25._2_2_);
  uVar44 = CONCAT22(param_27._0_2_,param_26._2_2_);
  puVar26 = (uint *)CONCAT22(param_29._0_2_,param_28._2_2_);
  uVar35 = CONCAT11(param_29._3_1_,param_29._2_1_);
  puVar19 = (uint *)CONCAT22((ushort)param_30,uVar35);
  puVar27 = (uint *)CONCAT22(param_31._0_2_,param_30._2_2_);
  puVar47 = (uint *)CONCAT13(param_32._1_1_,CONCAT12(param_32._0_1_,param_31._2_2_));
  out(*puVar49,uVar35);
  puVar18 = (uint *)(puVar49 + 2);
  if (CARRY1(bVar55,bVar11)) {
    out((byte)*puVar18,uVar35);
    puVar18 = (uint *)(puVar49 + 7);
    out(*(undefined4 *)(puVar49 + 3),uVar35);
    uVar44 = uVar44 - 1;
    param_38._0_1_ = bVar13;
    param_38._1_1_ = bVar25;
code_r0x008f4ca4:
    puVar2 = (ushort *)((int)puVar27 + uVar44 * 2 + 0x76);
    sVar15 = ((ushort)puVar18 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    param_31._2_2_ = SUB42(puVar45,0);
    param_32._0_1_ = (undefined1)((uint)puVar45 >> 0x10);
    param_32._1_1_ = (undefined1)((uint)puVar45 >> 0x18);
    uVar44 = (uint)((longlong)(int)puVar18[0x19] * 0x4d00776f);
    if ((longlong)(int)uVar44 != (longlong)(int)puVar18[0x19] * 0x4d00776f) {
      puVar48 = (undefined4 *)CONCAT13(param_33._1_1_,CONCAT12(param_33._0_1_,param_32._2_2_));
      uVar44 = CONCAT22((short)param_34,param_33._2_2_);
      puVar26 = (uint *)CONCAT22(param_36._0_2_,param_35._2_2_);
      puVar27 = (uint *)CONCAT13(param_38._1_1_,CONCAT12((byte)param_38,param_37._2_2_));
      puVar47 = (uint *)CONCAT13(param_39._1_1_,CONCAT12((byte)param_39,param_38._2_2_));
      puVar19 = (uint *)(CONCAT13(param_37._1_1_,CONCAT12((char)param_37,param_36._2_2_)) + 1);
      puVar18 = puVar48 + 1;
      out(*puVar48,(short)puVar19);
      if (-1 < (int)puVar19) {
code_r0x008f4cbb:
        pbVar17 = (byte *)(uVar44 + 0x73);
        bVar55 = *pbVar17;
        bVar13 = (byte)((uint)puVar19 >> 8);
        *pbVar17 = *pbVar17 + bVar13;
        if (!CARRY1(bVar55,bVar13)) {
          pcVar16 = (char *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                     CONCAT11((byte)((uint)puVar27 >> 8) ^ (byte)*puVar18,
                                              (char)puVar27));
          puVar49 = (undefined1 *)((int)puVar45 + 1);
          uVar14 = in((short)puVar19);
          *(undefined1 *)puVar45 = uVar14;
          puVar45 = (undefined4 *)((int)puVar45 + 2);
          uVar14 = in((short)puVar19);
          *puVar49 = uVar14;
code_r0x008f4cc6:
          *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
          *puVar26 = *puVar26 ^ (int)&param_38 + 1U;
          param_37._1_1_ = (char)pcVar16;
          param_37._2_2_ = (ushort)((uint)pcVar16 >> 8);
          param_38._0_1_ = (byte)((uint)pcVar16 >> 0x18);
code_r0x008f4ccb:
          *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
          *puVar26 = *puVar26 ^ (uint)&param_38;
          puVar18 = (uint *)((int)puVar18 + -2);
          *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
          *pcVar16 = *pcVar16 + (char)((uint)puVar19 >> 8);
          puVar27 = (uint *)((uint)pcVar16 & *(uint *)(pcVar16 + 0x4e));
code_r0x008f4cdc:
          *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
          bVar13 = (byte)param_38;
          bVar25 = param_38._1_1_;
code_r0x008f4cdf:
          param_38._1_1_ = bVar25;
          param_38._0_1_ = bVar13;
          *(byte *)puVar27 = (byte)*puVar27 + (char)((uint)puVar19 >> 8);
          bVar13 = (byte)param_38;
          bVar25 = param_38._1_1_;
          goto code_r0x008f4ce1;
        }
        puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + -0x20);
        goto code_r0x008f4ce5;
      }
      cVar12 = (char)param_38._2_2_ + -0x20;
      puVar20 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),cVar12);
      bVar51 = true;
      if (cVar12 < '\0') goto code_r0x008f4d01;
PTR_LAB_008f4d7c:
      puVar2 = (ushort *)(in_GS_OFFSET + (int)puVar20);
      sVar15 = ((ushort)puVar20 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
      pbVar17 = (byte *)((int)puVar18 + -1);
      puVar18 = (uint *)((int)puVar18 + 3);
      out(*(undefined4 *)pbVar17,(short)puVar19);
code_r0x008f4d7b:
      *(char *)(uVar44 + 99) = *(char *)(uVar44 + 99) + (char)puVar20;
      *(byte *)((int)puVar18 + 0x6f) = *(byte *)((int)puVar18 + 0x6f) + (char)puVar27;
      puVar48 = (undefined4 *)((int)puVar45 + -1);
      puVar2 = (ushort *)((int)puVar20 * 2 + 0x53);
      sVar15 = ((ushort)puVar18 & 3) - (*puVar2 & 3);
      *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
      puVar47 = puVar20;
      goto code_r0x008f4d89;
    }
    *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
    pcVar16 = (char *)((int)puVar45 + 99);
    *pcVar16 = *pcVar16 + (char)puVar27;
    if (*pcVar16 == '\0') goto code_r0x008f4d9f;
    pbVar17 = (byte *)((int)puVar26 + 0x65);
    bVar55 = *pbVar17;
    *pbVar17 = *pbVar17 + (char)puVar19;
    if (SCARRY1(bVar55,(char)puVar19)) goto s_Saturday_008f4dac;
code_r0x008f4d38:
    uVar35 = SUB42(puVar19,0);
    uVar4 = in(uVar35);
    *puVar45 = uVar4;
    bVar13 = (byte)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar13;
    pbVar17 = (byte *)((int)puVar27 + 0x75);
    bVar55 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar13;
    if (*pbVar17 != 0) {
      if (CARRY1(bVar55,bVar13)) {
        *(byte *)puVar47 = (byte)*puVar47 + bVar13;
        *(byte *)puVar47 = (byte)*puVar47 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar17 = (byte *)(CONCAT13(param_39._1_1_,CONCAT12((byte)param_39,param_38._2_2_)) + 0x75 +
                        CONCAT22((short)param_34,param_33._2_2_) * 2);
      bVar55 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar52;
      if (CARRY1(bVar55,bVar52)) {
        halt_baddata();
      }
      iVar36 = CONCAT22(param_40._0_2_,param_39._2_2_);
      puVar49 = (undefined1 *)CONCAT22(param_41._0_2_,param_40._2_2_);
      pcVar16 = (char *)CONCAT22(param_47._0_2_,param_46._2_2_);
      param_28._2_2_ = param_44._2_2_;
      goto code_r0x008f4dc7;
    }
    *(byte *)((int)puVar19 + 0x75) = *(byte *)((int)puVar19 + 0x75) + (char)puVar27;
    uVar14 = in(uVar35);
    *(undefined1 *)(puVar45 + 1) = uVar14;
    *(byte *)puVar47 = (byte)*puVar47 + bVar13;
    *(byte *)((int)puVar19 + 0x75) = *(byte *)((int)puVar19 + 0x75) + (char)puVar27;
    pbVar17 = (byte *)((int)puVar18 + 1);
    out((byte)*puVar18,uVar35);
    *(byte *)(in_GS_OFFSET + (int)puVar47) = *(byte *)(in_GS_OFFSET + (int)puVar47) + bVar13;
    bVar51 = CARRY1((byte)*puVar47,bVar13);
    *(byte *)puVar47 = (byte)*puVar47 + bVar13;
    if (SCARRY4((int)puVar27,1)) {
      out(*pbVar17,uVar35);
      goto code_r0x008f4dd0;
    }
    sVar15 = -((ushort)*puVar47 & 3);
    *(ushort *)puVar47 = (short)*puVar47 + (ushort)(0 < sVar15) * sVar15;
    uVar21 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar13;
    puVar27 = (uint *)CONCAT13(param_32._1_1_,CONCAT12(param_32._0_1_,param_31._2_2_));
    puVar18 = (uint *)CONCAT13(param_33._1_1_,CONCAT12(param_33._0_1_,param_32._2_2_));
    uVar44 = CONCAT22((short)param_34,param_33._2_2_);
    pbVar38 = (byte *)CONCAT22(param_36._0_2_,param_35._2_2_);
    uVar22 = CONCAT13(param_37._1_1_,CONCAT12((char)param_37,param_36._2_2_));
    pbVar28 = (byte *)CONCAT13(param_38._1_1_,CONCAT12((byte)param_38,param_37._2_2_));
    pbVar23 = (byte *)CONCAT13(param_39._1_1_,CONCAT12((byte)param_39,param_38._2_2_));
    if (!CARRY1((byte)uVar21,bVar13)) {
      bVar55 = (byte)param_38._2_2_;
      *pbVar23 = *pbVar23 + bVar55;
      bVar51 = CARRY1(*pbVar23,bVar55);
      *pbVar23 = *pbVar23 + bVar55;
      puVar45 = (undefined4 *)CONCAT22(param_40._0_2_,param_39._2_2_);
      uVar44 = CONCAT22(param_42._0_2_,param_41._2_2_);
      puVar26 = (uint *)CONCAT22(param_44._0_2_,param_43._2_2_);
      puVar19 = (uint *)CONCAT22(param_45._0_2_,param_44._2_2_);
      puVar27 = (uint *)CONCAT22(param_46._0_2_,param_45._2_2_);
      puVar20 = (uint *)CONCAT22(param_47._0_2_,param_46._2_2_);
      puVar18 = (uint *)((undefined1 *)CONCAT22(param_41._0_2_,param_40._2_2_) + 1);
      out(*(undefined1 *)CONCAT22(param_41._0_2_,param_40._2_2_),param_44._2_2_);
      if (uVar22 != 1) goto joined_r0x008f4dda;
      if (!bVar51) goto code_r0x008f4d7b;
      goto DAT_008f4df4;
    }
    if (pbVar17 == (byte *)0xffffffff) goto code_r0x008f4deb;
    *pbVar38 = *pbVar38 | bVar7;
code_r0x008f4e4c:
    pbVar17 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),CONCAT11(0xc2,(byte)pbVar28));
    bVar55 = (byte)pbVar23;
    *pbVar23 = bVar55;
    in_AF = 9 < (bVar55 & 0xf) | in_AF;
    uVar21 = CONCAT31((int3)((uint)pbVar23 >> 8),bVar55 + in_AF * -6) & 0xffffff0f;
    cVar12 = (char)((uint)pbVar23 >> 8) - in_AF;
    uVar21 = CONCAT22((short)(uVar21 >> 0x10),CONCAT11(cVar12,(char)uVar21));
    bVar55 = ((byte)pbVar28 & 0x1f) % 9;
    *pbVar17 = *pbVar17 << bVar55 | (byte)(CONCAT11(in_AF,*pbVar17) >> 9 - bVar55);
    puVar26 = (uint *)CONCAT22((short)((uint)pbVar38 >> 0x10),0x7400);
    *(char *)(uVar21 + 8) = *(char *)(uVar21 + 8) + cVar12;
    puVar19 = (uint *)(uVar22 ^ *puVar18);
    piVar1 = (int *)(uVar21 + 0x27);
    iVar36 = *piVar1;
    *piVar1 = *piVar1 << 6;
    uVar22 = (uint)(iVar36 << 5 < 0);
    bVar51 = uVar21 < 0x11cfe957 || uVar21 + 0xee3016a9 < uVar22;
    iVar36 = (uVar21 + 0xee3016a9) - uVar22;
    unique0x100019eb = (uint *)CONCAT22(param_41._0_2_,param_40._2_2_);
    unique0x100019f3 = puVar3;
  }
  else {
    if (SCARRY4((int)(puVar49 + 1),1)) {
      *(byte *)puVar47 = (byte)*puVar47 + (char)param_31._2_2_;
s_1_SNAN_008f4ce0:
      *puVar26 = *puVar26 ^ (int)&param_32 + 2U;
      param_38._1_1_ = (byte)puVar26;
      param_38._2_2_ = (short)((uint)puVar26 >> 8);
      param_39._0_1_ = (byte)((uint)puVar26 >> 0x18);
      puVar18 = (uint *)((int)puVar18 + -1);
      bVar25 = param_38._1_1_;
code_r0x008f4ce1:
      param_38._1_1_ = bVar25;
      param_38._0_1_ = bVar13;
      puVar19 = (uint *)((uint)puVar19 & *(uint *)((int)puVar26 + 0x4e));
      puVar27 = (uint *)((int)puVar27 + 1);
code_r0x008f4ce5:
      puVar18 = (uint *)((int)puVar18 + -1);
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
      pbVar17 = (byte *)((int)puVar47 + -1);
      bVar55 = (byte)((uint)pbVar17 >> 8);
      cVar12 = param_63._1_1_ + bVar55;
      param_63._0_2_ = CONCAT11(cVar12,param_63._0_1_);
      puVar20 = (uint *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + -0x20);
      uVar44 = uVar44 - 4;
      param_49._1_1_ = param_49._1_1_ & bVar55;
      pbVar17 = (byte *)((int)puVar27 + 0x79);
      *pbVar17 = *pbVar17 & (byte)((uint)puVar26 >> 8);
      bVar51 = (char)*pbVar17 < '\0';
code_r0x008f4d01:
      puVar48 = puVar45;
      if (!bVar51) goto PTR_LAB_008f4d7c;
code_r0x008f4d03:
      pbVar17 = (byte *)(uVar44 + 0x2f);
      bVar55 = *pbVar17;
      bVar25 = (byte)puVar27;
      *pbVar17 = *pbVar17 + bVar25;
      bVar13 = (byte)puVar20;
      in_AF = 9 < (bVar13 & 0xf) | in_AF;
      cVar12 = bVar13 + in_AF * -6 + (0x99 < bVar13 || CARRY1(bVar55,bVar25)) * -0x60;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),cVar12);
      if (cVar12 < '\0') {
        *(byte *)puVar47 = (byte)*puVar47 + cVar12;
        param_32._2_2_ = (undefined2)((uint)puVar20 >> 8);
        param_33._0_1_ = (undefined1)((uint)puVar20 >> 0x18);
        *(byte *)puVar47 = (byte)*puVar47 + cVar12;
        puVar27 = (uint *)((int)puVar27 + 1);
        uVar44 = uVar44 - 2;
        goto code_r0x008f4d12;
      }
      *(char *)((int)puVar48 + 99) = *(char *)((int)puVar48 + 99) + bVar25;
      param_38._2_2_ = (short)puVar26;
      param_39._0_1_ = (byte)((uint)puVar26 >> 0x10);
      param_39._1_1_ = (undefined1)((uint)puVar26 >> 0x18);
code_r0x008f4d89:
      pbVar17 = (byte *)((int)puVar27 + 1);
      if (pbVar17 == (byte *)0x0) {
        *(byte *)((int)puVar19 + 0x75) = *(byte *)((int)puVar19 + 0x75);
        uVar14 = in((short)puVar19);
        *(undefined1 *)puVar48 = uVar14;
        *(byte *)((int)puVar19 + 0x75) = *(byte *)((int)puVar19 + 0x75);
        out((byte)*puVar18,(short)puVar19);
        *(undefined1 *)(uVar44 + 0x61) = *(undefined1 *)(uVar44 + 0x61);
        puVar27 = (uint *)((int)puVar27 + 2);
code_r0x008f4d9f:
        *(char *)(uVar44 + 0x61) = *(char *)(uVar44 + 0x61) + (char)puVar27;
        goto DAT_008f4da4;
      }
      iVar36 = *puVar47 * 0x756854;
      pcVar16 = (char *)((int)User32Reserved + uVar44 + (int)puVar18 * 2 + 0x21);
      *pcVar16 = *pcVar16 + (char)puVar19;
code_r0x008f4e03:
      *(char *)(uVar44 + 0x6f) = *(char *)(uVar44 + 0x6f) + (char)pbVar17;
      out((byte)*puVar18,(short)puVar19);
      *(byte *)((int)puVar26 + 0x75) = *(byte *)((int)puVar26 + 0x75) + (char)puVar19;
      out(*(byte *)((int)puVar18 + 1),(short)puVar19);
      pbVar17 = pbVar17 + 0x2f;
      bVar55 = *pbVar17;
      bVar25 = (byte)((uint)iVar36 >> 8);
      bVar13 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar25;
      puVar18 = (uint *)CONCAT13(param_49._1_1_,CONCAT12((byte)param_49,param_48._2_2_));
      uVar44 = CONCAT22(param_50._0_2_,param_49._2_2_);
      pbVar38 = (byte *)CONCAT22(param_52._0_2_,param_51._2_2_);
      uVar22 = CONCAT22(param_53._0_2_,param_52._2_2_);
      pbVar28 = (byte *)CONCAT22(param_54._0_2_,param_53._2_2_);
      puVar27 = (undefined4 *)CONCAT22(param_48._0_2_,param_47._2_2_) + 1;
      uVar4 = in(param_52._2_2_);
      *(undefined4 *)CONCAT22(param_48._0_2_,param_47._2_2_) = uVar4;
      bVar52 = (byte)param_54._2_2_;
      in_AF = 9 < (bVar52 & 0xf) | in_AF;
      cVar12 = bVar52 + in_AF * -6 + (0x99 < bVar52 || CARRY1(bVar55,bVar25)) * -0x60;
      pbVar23 = (byte *)CONCAT31((int3)(CONCAT22(param_55._0_2_,param_54._2_2_) >> 8),cVar12);
      if (!SCARRY1(bVar13,bVar25)) {
        *pbVar23 = *pbVar23 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar20 = puVar27;
      unique0x100019f7 = puVar3;
      if ((0x99 >= bVar52 && !CARRY1(bVar55,bVar25)) && cVar12 != '\0') goto code_r0x008f4e84;
      goto code_r0x008f4e4c;
    }
    iVar36 = uVar44 - 1;
    bVar51 = uVar44 != 1;
    puVar45 = (undefined4 *)CONCAT13(param_33._1_1_,CONCAT12(param_33._0_1_,param_32._2_2_));
    puVar18 = (uint *)CONCAT22((short)param_34,param_33._2_2_);
    uVar44 = CONCAT22(param_35._0_2_,param_34._2_2_);
    puVar26 = (uint *)CONCAT13(param_37._1_1_,CONCAT12((char)param_37,param_36._2_2_));
    puVar19 = (uint *)CONCAT13(bVar25,CONCAT12(bVar13,param_37._2_2_));
    puVar27 = (uint *)CONCAT13(param_39._1_1_,CONCAT12((byte)param_39,param_38._2_2_));
    puVar47 = (uint *)CONCAT22(param_40._0_2_,param_39._2_2_);
    if (-1 < iVar36) {
      puVar27 = (uint *)((int)puVar27 + 1);
      param_38._0_1_ = bVar13;
      param_38._1_1_ = bVar25;
      goto code_r0x008f4cbb;
    }
    if (bVar51) goto s_1_SNAN_008f4ce0;
    puVar19 = (uint *)((int)puVar19 + -1);
    if (puVar19 != (uint *)0x0) goto code_r0x008f4ce1;
    bVar51 = SCARRY4((int)puVar27,1);
    puVar27 = (uint *)((int)puVar27 + 1);
    if (puVar27 != (uint *)0x0) goto code_r0x008f4cdf;
    param_38._2_2_ = (short)((uint)puVar26 >> 0x10);
    pcVar16 = (char *)0x0;
    if (bVar51) goto code_r0x008f4ccb;
    puVar2 = (ushort *)((int)puVar18 + 0x6f);
    sVar15 = (param_33._2_2_ & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    if (0 < sVar15) goto code_r0x008f4cc6;
    puVar2 = (ushort *)(in_GS_OFFSET + (int)puVar47);
    sVar15 = (param_39._2_2_ & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    bVar13 = (byte)((uint)param_39 >> 0x10);
    *(byte *)puVar47 = (byte)*puVar47 + bVar13;
    *(undefined1 *)((int)puVar26 * 2) = *(undefined1 *)((int)puVar26 * 2);
    pbVar17 = (byte *)((int)puVar45 + 0x65);
    bVar55 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar13;
    if (*pbVar17 == 0) goto code_r0x008f4cdc;
    puVar48 = (undefined4 *)CONCAT22(param_38._2_2_,param_36._2_2_);
    uVar44 = CONCAT22(param_40._2_2_,param_40._0_2_);
    puVar19 = param_43;
    puVar26 = param_42;
    if (!CARRY1(bVar55,bVar13)) {
      in_AF = 9 < (bVar9 & 0xf) | in_AF;
      puVar20 = (uint *)CONCAT31((int3)((uint)param_45 >> 8),
                                 bVar9 + in_AF * -6 +
                                 (0x99 < bVar9 || CARRY1(bVar55,bVar13)) * -0x60);
      puVar27 = param_44;
      puVar18 = param_39;
      goto code_r0x008f4d03;
    }
    puVar27 = (uint *)((int)param_44 + 1);
    puVar2 = (ushort *)((byte *)((int)param_44 + 0x77) + uVar44 * 2);
    sVar15 = ((byte)param_39 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    param_38._2_2_ = (short)((uint)param_45 >> 8);
    param_39._0_1_ = (byte)((uint)param_45 >> 0x18);
    puVar18 = puVar20 + 1;
    out(*puVar20,param_43._0_2_);
    puVar47 = param_45;
    param_38._1_1_ = bVar9;
    if (!SCARRY4((int)param_44,1)) {
      pcVar16 = (char *)((int)puVar48 + 0x65);
      *pcVar16 = *pcVar16 + bVar9;
      puVar45 = puVar48;
      if (*pcVar16 != '\0') goto code_r0x008f4ca4;
      goto code_r0x008f4ce5;
    }
code_r0x008f4d12:
    bVar55 = (byte)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
    puVar2 = (ushort *)(in_GS_OFFSET + uVar44 + 0x6d);
    sVar15 = ((short)&param_38 + 2U & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
    uVar22 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
    pbVar17 = (byte *)((int)puVar18 + -1);
    puVar18 = (uint *)((int)puVar18 + 3);
    out(*(undefined4 *)pbVar17,(short)puVar19);
    if (CARRY1((byte)uVar22,bVar55) || pbVar17 == (byte *)0x0) goto code_r0x008f4d89;
    uVar4 = in((short)puVar19);
    *puVar48 = uVar4;
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
    *(byte *)puVar47 = (byte)*puVar47 + bVar55;
    puVar45 = (undefined4 *)((int)puVar48 + 3);
    puVar2 = (ushort *)((int)puVar48 + uVar44 * 2 + 0x65);
    sVar15 = ((ushort)puVar18 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar15) * sVar15;
    param_31._2_2_ = SUB42(puVar26,0);
    param_32._0_1_ = (undefined1)((uint)puVar26 >> 0x10);
    param_32._1_1_ = (undefined1)((uint)puVar26 >> 0x18);
    if (!SBORROW4((int)(puVar48 + 1),1)) goto code_r0x008f4d38;
s_Saturday_008f4dac:
    param_30._2_2_ = SUB42(puVar26,0);
    param_31._0_2_ = (undefined2)((uint)puVar26 >> 0x10);
DAT_008f4da4:
    pcVar16 = (char *)CONCAT22(param_46._0_2_,param_45._2_2_);
    out(*(undefined1 *)CONCAT22(param_40._0_2_,param_39._2_2_),param_43._2_2_);
    pbVar17 = (byte *)(CONCAT22(param_43._0_2_,param_42._2_2_) + 0x61);
    bVar55 = *pbVar17;
    bVar13 = (byte)((uint)param_43 >> 0x10);
    *pbVar17 = *pbVar17 + bVar13;
    cVar12 = (char)((uint)param_45 >> 0x10);
    if (*pbVar17 == 0) {
      *pcVar16 = *pcVar16 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (CARRY1(bVar55,bVar13)) {
      *pcVar16 = *pcVar16 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar6 = (char *)CONCAT22(param_54._0_2_,param_53._2_2_);
    cVar12 = (char)((uint)param_53 >> 0x10);
    *pcVar6 = *pcVar6 + cVar12;
    pcVar16 = (char *)(CONCAT22(param_48._0_2_,param_47._2_2_) + 0x72);
    *pcVar16 = *pcVar16 + cVar12;
    if (*pcVar16 != '\0') {
      *pcVar6 = *pcVar6 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((longlong)((int)&param_23 + 2) ==
        (longlong)*(int *)(CONCAT22(param_53._0_2_,param_52._2_2_) + 0x79) * 0x68540000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar36 = CONCAT22(param_24._0_2_,param_23._2_2_);
    puVar49 = (undefined1 *)CONCAT22(param_25._0_2_,param_24._2_2_);
    pcVar16 = (char *)CONCAT22(param_31._0_2_,param_30._2_2_);
code_r0x008f4dc7:
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pbVar17 = (byte *)(iVar36 + 0x65);
    bVar51 = CARRY1(*pbVar17,(byte)param_28._2_2_);
    *pbVar17 = *pbVar17 + (byte)param_28._2_2_;
    out(*puVar49,param_28._2_2_);
code_r0x008f4dd0:
    sVar15 = param_38._2_2_;
    if (!bVar51) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar17 = (byte *)CONCAT13(param_39._1_1_,CONCAT12((byte)param_39,param_38._2_2_));
    param_38._2_2_ = (short)&param_39 + 2;
    bVar51 = CARRY1(*pbVar17,(byte)sVar15);
    *pbVar17 = *pbVar17 + (byte)sVar15;
    param_39._0_1_ = (byte)((uint)((int)&param_39 + 2) >> 0x10);
    param_39._1_1_ = (undefined1)((uint)((int)&param_39 + 2) >> 0x18);
    if (*pbVar17 != 0) {
      return;
    }
joined_r0x008f4dda:
    if (!bVar51) {
      return;
    }
    out(*(undefined4 *)CONCAT22(param_40._0_2_,param_39._2_2_),param_43._2_2_);
    out(*(undefined1 *)((undefined4 *)CONCAT22(param_40._0_2_,param_39._2_2_) + 1),param_43._2_2_);
    pcVar16 = (char *)(CONCAT22(param_51._0_2_,param_50._2_2_) + 0x75);
    *pcVar16 = *pcVar16 + (char)((uint)param_51 >> 0x10);
    out(*(undefined1 *)CONCAT22(param_48._0_2_,param_47._2_2_),param_51._2_2_);
code_r0x008f4deb:
    puVar18 = (uint *)CONCAT22(param_41._0_2_,param_40._2_2_);
    pbVar17 = (byte *)(CONCAT22(param_44._0_2_,param_43._2_2_) + 0x61);
    bVar51 = CARRY1(*pbVar17,bVar29);
    *pbVar17 = *pbVar17 + bVar29;
DAT_008f4df4:
    puVar27 = (uint *)CONCAT22(param_40._0_2_,param_39._2_2_);
    uVar44 = CONCAT22(param_42._0_2_,param_41._2_2_);
    iVar36 = CONCAT22(param_47._0_2_,param_46._2_2_);
    puVar26 = (uint *)CONCAT22(param_44._0_2_,param_43._2_2_);
    puVar19 = (uint *)CONCAT22(param_45._0_2_,param_44._2_2_);
    pbVar17 = (byte *)CONCAT22(param_46._0_2_,param_45._2_2_);
    register0x00000010 = (undefined1 *)((int)&param_47 + 2);
    puVar18 = (uint *)((int)puVar18 + 1);
    if (!bVar51) {
      pcVar16 = (char *)(iVar36 + 0x75 + uVar44 * 2);
      *pcVar16 = *pcVar16 + bVar29;
      *(char *)((int)puVar27 + 0x65) = *(char *)((int)puVar27 + 0x65) + bVar29;
      pcVar16 = (char *)((int)User32Reserved + uVar44 + (int)puVar18 * 2 + 0x21);
      *pcVar16 = *pcVar16 + bVar29;
      goto code_r0x008f4e03;
    }
    bVar55 = (byte)((uint)param_46 >> 0x10);
    in_AF = 9 < (bVar55 & 0xf) | in_AF;
    uVar22 = CONCAT31((int3)((uint)iVar36 >> 8),bVar55 + in_AF * '\x06' + '`');
    bVar51 = uVar22 < 0x11cfe958;
    iVar36 = uVar22 + 0xee3016a8;
    unique0x100019ef = puVar18;
  }
  puVar20 = puVar27 + 1;
  *puVar27 = *puVar18;
  pbVar38 = (byte *)((uint)puVar26 & 0xffffff00);
  pbVar23 = (byte *)CONCAT31((int3)((uint)iVar36 >> 8),-0x3f - bVar51);
  *pbVar23 = *pbVar23 + (-0x3f - bVar51);
  bVar13 = (byte)((uint)pbVar17 >> 8);
  bVar52 = (byte)((uint)puVar26 >> 8);
  pbVar28 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),CONCAT11(bVar13 - bVar52,(byte)pbVar17))
  ;
  bVar55 = ((byte)pbVar17 & 0x1f) % 9;
  *pbVar28 = *pbVar28 << bVar55 | (byte)(CONCAT11(bVar13 < bVar52,*pbVar28) >> 9 - bVar55);
  uVar22 = CONCAT31((int3)((uint)puVar19 >> 8),0x7a);
  pbVar23[-0x69cedd37] = pbVar23[-0x69cedd37] + (char)((uint)iVar36 >> 8);
  puVar18[-0xd] = puVar18[-0xd] ^ (uint)(puVar18 + 1);
  param_38._2_2_ = in_ES;
code_r0x008f4e84:
  register0x00000010 = (undefined1 *)((int)&param_38 + 2);
  pbVar23 = pbVar23 + 0x48cc2f83;
  uVar40 = (undefined3)((uint)pbVar38 >> 8);
  uVar39 = CONCAT31(uVar40,(char)((uint)pbVar23 >> 8));
  param_37._2_2_ = CONCAT11((char)pbVar38,(char)pbVar23);
  uVar24 = (uint)param_37._2_2_;
  *(int *)(uVar39 + 0x11d31f22) = *(int *)(uVar39 + 0x11d31f22) + uVar22;
  uVar21 = uRam88498623 & 0xd2;
  uRam88498623 = uRam88498623 & 0xffffffd2;
  bVar55 = 0;
  if (uVar21 != 0) {
    *pbVar28 = *pbVar28 | 0x31;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_38._0_1_ = (byte)((uint)pbVar23 >> 0x10);
  param_38._1_1_ = (byte)((uint)pbVar23 >> 0x18);
  param_36._2_2_ = SUB42(pbVar28,0);
  param_37._0_1_ = (char)((uint)pbVar28 >> 0x10);
  param_37._1_1_ = (char)((uint)pbVar28 >> 0x18);
  param_35._2_2_ = (undefined2)uVar22;
  param_36._0_2_ = (undefined2)(uVar22 >> 0x10);
  param_34._2_2_ = (undefined2)uVar39;
  param_35._0_2_ = (undefined2)((uint)pbVar38 >> 0x10);
  param_32._2_2_ = (undefined2)uVar44;
  param_33._0_1_ = (undefined1)(uVar44 >> 0x10);
  param_33._1_1_ = (undefined1)(uVar44 >> 0x18);
  param_31._2_2_ = 0x8623;
  param_32._0_1_ = 0x49;
  param_32._1_1_ = 0x88;
  param_30._2_2_ = SUB42(puVar20,0);
  param_31._0_2_ = (undefined2)((uint)puVar20 >> 0x10);
  out(uRam88498623,param_35._2_2_);
  uRam50bf453d = (char)pbVar23;
  *(uint *)(uVar44 + 0xa50e4730) = *(uint *)(uVar44 + 0xa50e4730) | uVar39;
  uVar14 = in(10);
  puVar20 = puVar20 + -1;
  iVar36 = -0x77b679e5;
  sVar15 = (short)CONCAT31(uVar40,uVar14) + -1;
  uRamaa418f41 = (uint)sVar15;
  puVar18 = *(uint **)(&stack0x7277e131 + uRamaa418f41);
  *(char *)((uRamaa418f41 - 0x3a) + (int)puVar20 * 2) = (char)sVar15;
  bVar52 = 0x456caf4c < uRamaa418f41 || CARRY4(uRamaa418f41 + 0xba9350b3,(uint)(puVar18 < puVar20));
  bVar54 = SCARRY4((int)pbVar28,1);
  pbVar28 = pbVar28 + 1;
  bVar53 = (int)pbVar28 < 0;
  bVar51 = pbVar28 == (byte *)0x0;
  bVar13 = POPCOUNT((uint)pbVar28 & 0xff);
  do {
    param_29._3_1_ =
         (byte)((uint)(in_NT & 1) * 0x4000 >> 8) | (byte)((uint)bVar54 * 0x800 >> 8) | 4 |
         (byte)((uint)(bVar55 & 1) * 0x200 >> 8) | (byte)((uint)(in_TF & 1) * 0x100 >> 8);
    param_29._2_1_ =
         bVar53 * -0x80 | bVar51 * '@' | (in_AF & 1) * '\x10' | ((bVar13 & 1) == 0) * '\x04' |
         bVar52;
    param_30._0_2_ =
         (ushort)(in_ID & 1) * 0x20 | (ushort)(in_VIP & 1) * 0x10 | (ushort)(in_VIF & 1) * 8 |
         (ushort)(in_AC & 1) * 4;
    puVar3 = (undefined1 *)segment(0xf000,(short)uVar24 + 0x41);
    *puVar3 = 0xb2;
    param_28._2_2_ = (undefined2)iVar36;
    param_29._0_2_ = (undefined2)((uint)iVar36 >> 0x10);
    param_27._2_2_ = 0xf000;
    param_26._2_2_ = 0x4f03;
    param_27._0_2_ = 0x8f;
    uVar56 = func_0x8c4c25cb();
    piVar1 = (int *)((int)((ulonglong)uVar56 >> 0x20) + 0x6a + extraout_ECX);
    *piVar1 = (*piVar1 - (int)uVar56) - (uint)bVar52;
    iVar36 = iVar36 + -1;
    uVar24 = CONCAT31((int3)(uVar24 >> 8),(char)((ulonglong)uVar56 >> 0x20));
    param_30._2_2_ = (undefined2)((ulonglong)uVar56 >> 0x20);
    param_31._0_2_ = (undefined2)((ulonglong)uVar56 >> 0x30);
    LOCK();
    uVar22 = *puVar20;
    *puVar20 = uVar44;
    UNLOCK();
    bVar13 = (byte)((uint)((int)&param_27 + 2) >> 8);
    bVar52 = CARRY1(param_29._2_1_,bVar13);
    bVar54 = SCARRY1(param_29._2_1_,bVar13);
    cVar12 = param_29._2_1_ + bVar13;
    bVar53 = cVar12 < '\0';
    bVar51 = cVar12 == '\0';
    bVar13 = POPCOUNT(cVar12);
    uVar44 = uVar22;
  } while (CONCAT31((int3)(CONCAT22((short)((uint)extraout_ECX >> 0x10),in_SS) >> 8),0xbd) != 1 &&
           !bVar51);
  return;
}


