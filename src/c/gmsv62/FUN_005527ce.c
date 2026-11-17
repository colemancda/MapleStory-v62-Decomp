/* FUN_005527ce - 0x005527ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005527ce(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_cc;
  undefined *puStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  wchar_t *pwStack_b4;
  wchar_t *pwStack_b0;
  int iStack_ac;
  int *piStack_a8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  piStack_a8 = (int *)0x0;
  iStack_ac = 0;
  *(wchar_t ***)(unaff_EBP + -0x28) = &pwStack_b0;
  pwStack_b4 = u_reward_0096562c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_b8 = 0x5527fb;
  FUN_004033a1();
  pwStack_b4 = (wchar_t *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_b8 = 0x55280a;
  FUN_0040263d();
  uStack_b8 = 0x552811;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pwStack_b0 = 
  L"쌻䖉觔\xe85dᵴ䖍僔䶍\xe8e8⋾￫쌻ൽȽ@璀倆루㉥贀걅왐ﱅ\xe804ͳ￫쌻絙倆ꃨ㉥㤀\xe85dᕵ䶍\xe8e8ﾃ￪䶍\xe80cｻ￪ө\x03贀\xe04d嶉\xe8e4湴"
  ;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    piStack_a8 = (int *)(unaff_EBP + -0x2c);
    iStack_ac = 0x552832;
    piStack_a8 = (int *)FUN_00404b30();
    if (((int)piStack_a8 < 0) && (piStack_a8 != (int *)0x80004002)) {
      iStack_ac = 0x552843;
      FUN_00878dfb();
    }
  }
  piStack_a8 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_ac = 0x552850;
  piStack_a8 = (int *)FUN_00402bc3();
  if ((int)piStack_a8 < 0) {
    iStack_ac = 0x55285b;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    piStack_a8 = (int *)0x552868;
    FUN_004027eb();
    piStack_a8 = (int *)0x552870;
    FUN_004027eb();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    piStack_a8 = (int *)0x552880;
    FUN_005596f4();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 4) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    while( true ) {
      piStack_a8 = (int *)0x55289a;
      FUN_0087a1b0();
      piStack_a8 = (int *)0x0;
      iStack_ac = 0;
      pwStack_b4 = *(wchar_t **)(unaff_EBP + -0x24);
      uStack_b8 = 0x5528a7;
      pwStack_b0 = (wchar_t *)&stack0xffffff5c;
      pwStack_b4 = (wchar_t *)FUN_00412335();
      *(wchar_t ***)(unaff_EBP + -0x14) = &pwStack_b0;
      uStack_b8 = 0x5528b3;
      FUN_004033a1();
      pwStack_b4 = (wchar_t *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_b8 = 0x5528c6;
      FUN_0040263d();
      uStack_b8 = 0x5528cd;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      pwStack_b0 = (wchar_t *)0x5528d8;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar2 != 0) {
        piStack_a8 = (int *)(unaff_EBP + -0x28);
        iStack_ac = 0x5528ee;
        piStack_a8 = (int *)FUN_00404b30();
        if (((int)piStack_a8 < 0) && (piStack_a8 != (int *)0x80004002)) {
          iStack_ac = 0x5528ff;
          FUN_00878dfb();
        }
      }
      piStack_a8 = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_ac = 0x55290f;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x55291a;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      piStack_a8 = (int *)0xffffffff;
      iStack_ac = 0x55292d;
      puVar3 = (undefined4 *)FUN_00559989();
      piStack_a8 = (int *)0x1;
      *(int **)(unaff_EBP + -0x14) = &iStack_ac;
      pwStack_b0 = u_prob_00965610;
      pwStack_b4 = 
      L"䖍傌䶍웰ﱅ\xe809ﳬ￪좋䳨\xeb1f僿䗆௼\xeee8\xebfb觿ц䖍傌䗆ৼ凨\xeb02菿ೄ쌻ٽ\xe850摼2事謄\xe445䠁匄譑觌\xec65Ѩ陖\xe800ਈ￫䖍傼䶍웰ﱅ\xe809ﲔ￪좋\xf4e8\xeb1e僿䗆෼雨\xebfb觿贆뱅왐ﱅ\xe809Ǻ￫쒃㬌緃倆◨㉤匀譑觌\xec65\xf868陕\xe800঺￫䖍傜䶍웰ﱅ\xe809ﱆ￪좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_004033a1();
      pwStack_b0 = (wchar_t *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = 
      L"좋䳨\xeb1f僿䗆௼\xeee8\xebfb觿ц䖍傌䗆ৼ凨\xeb02菿ೄ쌻ٽ\xe850摼2事謄\xe445䠁匄譑觌\xec65Ѩ陖\xe800ਈ￫䖍傼䶍웰ﱅ\xe809ﲔ￪좋\xf4e8\xeb1e僿䗆෼雨\xebfb觿贆뱅왐ﱅ\xe809Ǻ￫쒃㬌緃倆◨㉤匀譑觌\xec65\xf868陕\xe800঺￫䖍傜䶍웰ﱅ\xe809ﱆ￪좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_0040263d();
      pwStack_b4 = (wchar_t *)0x552958;
      iStack_ac = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      pwStack_b0 = (wchar_t *)0x552962;
      uVar4 = FUN_00412550();
      puVar3[1] = uVar4;
      pwStack_b0 = (wchar_t *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = (wchar_t *)0x552972;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x55297f;
        FUN_00878dfb();
      }
      iStack_ac = puVar3[1];
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x1c) + 4);
      *piVar1 = *piVar1 + iStack_ac;
      piStack_a8 = (int *)0x0;
      *(int **)(unaff_EBP + -0x14) = &iStack_ac;
      pwStack_b0 = u_item_00965604;
      pwStack_b4 = 
      L"䖍傼䶍웰ﱅ\xe809ﲔ￪좋\xf4e8\xeb1e僿䗆෼雨\xebfb觿贆뱅왐ﱅ\xe809Ǻ￫쒃㬌緃倆◨㉤匀譑觌\xec65\xf868陕\xe800঺￫䖍傜䶍웰ﱅ\xe809ﱆ￪좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_004033a1();
      pwStack_b0 = (wchar_t *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = 
      L"좋\xf4e8\xeb1e僿䗆෼雨\xebfb觿贆뱅왐ﱅ\xe809Ǻ￫쒃㬌緃倆◨㉤匀譑觌\xec65\xf868陕\xe800঺￫䖍傜䶍웰ﱅ\xe809ﱆ￪좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_0040263d();
      pwStack_b4 = (wchar_t *)0x5529b0;
      iStack_ac = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pwStack_b0 = (wchar_t *)0x5529ba;
      uVar4 = FUN_00412550();
      *puVar3 = uVar4;
      pwStack_b0 = (wchar_t *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = 
      L"쒃㬌緃倆◨㉤匀譑觌\xec65\xf868陕\xe800঺￫䖍傜䶍웰ﱅ\xe809ﱆ￪좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x5529d6;
        FUN_00878dfb();
      }
      piStack_a8 = (int *)0x0;
      *(int **)(unaff_EBP + -0x14) = &iStack_ac;
      pwStack_b0 = u_count_009655f8;
      pwStack_b4 = 
      L"䖍傜䶍웰ﱅ\xe809ﱆ￪좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_004033a1();
      pwStack_b0 = (wchar_t *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = 
      L"좋ꛨ\xeb1e僿䗆࿼䣨\xebfb觿ࡆ䖍傜䗆ৼꯨ\xeb01菿ೄ쌻ٽ\xe850揖2ⱨ鞁儀첋斉埬毨\xeb09跿岅\xffff僿䶍웰ﱅ\xe809ﯴ￪좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_0040263d();
      pwStack_b4 = (wchar_t *)0x5529fe;
      iStack_ac = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      pwStack_b0 = (wchar_t *)0x552a08;
      uVar4 = FUN_00412550();
      puVar3[2] = uVar4;
      pwStack_b0 = (wchar_t *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = (wchar_t *)0x552a18;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x552a25;
        FUN_00878dfb();
      }
      piStack_a8 = (int *)&DAT_0097812c;
      *(int **)(unaff_EBP + -0x14) = &iStack_ac;
      pwStack_b0 = u_Effect_0096561c;
      pwStack_b4 = (wchar_t *)0x552a36;
      FUN_004033a1();
      pwStack_b0 = (wchar_t *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      pwStack_b4 = 
      L"좋哨\xeb1e僿䗆ᇼ毨\xee19姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ㫨㉷褀\xec65ⱨ鞁儀첋斉埌៨\xeb09跿粅\xffff僿䶍웰ﱅ\xe811ﮠ￪좋è\xeb1e僿䗆ᏼ៨\xee19姿卙桓\xffff㿿痿櫬僿卓ᗿ듌\x97ｪ痿跬౎௨\xec24跿粅\xffff僿䗆ᇼ\xe1e8\xeb00㯿姃ٽ\xe850挎2薍｜\xffff왐ﱅ\xe809Æ￫쌻絙倆\xf3e8㉢謀\xf045쌻䗆׼ٴࢋｐࡑ䗿\xe9dcﵱ\xffff䶍웰ﱅ\xe805ﲾ￪䖍僠䖍倈䖋跐蒈"
      ;
      FUN_0040263d();
      pwStack_b4 = (wchar_t *)0x552a50;
      iStack_ac = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      pwStack_b0 = (wchar_t *)0x552a5a;
      uStack_bc = FUN_004343c5();
      piStack_a8 = (int *)0x0;
      iStack_ac = 0;
      pwStack_b0 = (wchar_t *)0x0;
      pwStack_b4 = (wchar_t *)0x0;
      uStack_b8 = 0xffffffff;
      uStack_c0 = 0;
      uStack_c4 = 0;
      puStack_c8 = (undefined *)0x552a6b;
      (*DAT_0097b4cc)();
      puStack_c8 = (undefined *)0x552a76;
      FUN_0087a1b0();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_c4;
      puStack_c8 = &DAT_0097812c;
      *(undefined4 **)(unaff_EBP + -0x34) = &uStack_cc;
      FUN_004033a1(u_Effect_0096561c);
      iVar2 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0040263d(iVar2);
      uStack_cc = FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      uVar4 = FUN_004343c5();
      puStack_c8 = (undefined *)0x0;
      uStack_cc = 0;
      (*DAT_0097b4cc)(0,0,uVar4,0xffffffff,*(undefined4 *)(unaff_EBP + -0x14),0x3fffffff);
      piStack_a8 = (int *)0xffffffff;
      iStack_ac = *(int *)(unaff_EBP + -0x14);
      pwStack_b0 = (wchar_t *)0x552ad2;
      FUN_00414edd();
      piStack_a8 = (int *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_ac = 0x552ae2;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x552aed;
        FUN_00878dfb();
      }
      piStack_a8 = (int *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_ac = 0x552afd;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x552b08;
        FUN_00878dfb();
      }
      piStack_a8 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_a8 != (int *)0x0) {
        iStack_ac = 0x552b19;
        (**(code **)(*piStack_a8 + 8))();
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_a8 = (int *)0x552b2d;
    FUN_004027eb();
    piStack_a8 = (int *)(unaff_EBP + -0x20);
    iStack_ac = unaff_EBP + 8;
    pwStack_b0 = 
    L"崹웤ﱅ琄匌䶍\xe8e0﯐\xfff6嶉诤\xe845쌻嶈瓼謆倈凿謈౅䶃￼쌻ٴࢋｐࡑ䶋跴傥\xffff忿摞ඉ"
    ;
    FUN_0055a3af();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_a8 = (int *)0x0;
      iStack_ac = 0x552b55;
      FUN_004c2725();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    piStack_a8 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_a8 != (int *)0x0) {
      iStack_ac = 0x552b68;
      (**(code **)(*piStack_a8 + 8))();
    }
    piStack_a8 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_a8 != (int *)0x0) {
      iStack_ac = 0x552b79;
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


